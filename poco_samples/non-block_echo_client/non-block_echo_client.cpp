#include "Poco/Net/Net.h"
#include "Poco/Net/StreamSocket.h"
#include "Poco/Net/SocketAddress.h"
#include "Poco/DateTime.h"
#include "Poco/Timespan.h"

const Poco::UInt16 PORT = 32452;

int main()
{	
	Poco::Net::StreamSocket ss;

	try
	{
		std::cout << "서버에 연결 시도..." << std::endl;
		ss.connectNB(Poco::Net::SocketAddress("localhost", PORT));
		
		Poco::Timespan timeout(1, 0); // 1초
		while(ss.poll(timeout, Poco::Net::Socket::SELECT_WRITE) == false)
		{
			std::cout << "서버에 연결 중..." << std::endl;
		}
		
		std::cout << "서버에 연결 완료" << std::endl;
		
		
		for (int i = 0; i < 3; ++i)
		{
			char szMessage[128] = { 0, };
			sprintf_s(szMessage, 128 - 1, "%d - Send Message", i);
			
			int nMsgLen = strnlen_s(szMessage, 128 - 1);
			ss.sendBytes(szMessage, nMsgLen);
			std::cout << "서버에 보낸 메시지: " << szMessage << std::endl;


			Poco::DateTime now1;
			std::cout << "poll 시작: " << now1.second() << std::endl;

			while (ss.poll(timeout, Poco::Net::Socket::SELECT_READ) == false)
			{
				std::cout << "receive 대기 중..." << std::endl;
			}

			Poco::DateTime now2;
			std::cout << "poll 완료: " << now2.second() << std::endl;

			char buffer[256] = { 0, };
			auto len = ss.receiveBytes(buffer, sizeof(buffer));
			std::cout << "서버로부터 받은 메시지: " << buffer << std::endl;
		}
		
		std::cout << "서버와 접속 종료" << std::endl;
		ss.close(); 
	}
	catch (Poco::Exception& exc)
	{
		std::cout << "서버 접속 실패: " << exc.displayText() << std::endl;
	}
	
	getchar();
	return 0;
}