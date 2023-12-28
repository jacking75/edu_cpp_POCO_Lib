# C++ 오픈소스 라이브러리 POCO 라이브러 학습
- [POCO 라이브러리 공식 사이트](https://pocoproject.org/ )  
- [POCO 라이브러리 GitHub](https://github.com/pocoproject/poco )  
- 현재 버전: (2023.11.30) 1.12.5p1
  
  
## 설치하기 
- [(2022.12) POCO 설치 후 Visual Studio에서 사용하기](https://smoh.tistory.com/482 )
- [(2021.05) Windows 에서 POCO 라이브러리 빌드하기](https://blog.naver.com/sonmg/222348986911 )
- [(2019.11) Windows, Linux 에서 POCO 라이브러리 설치하고 사용하기](./docs/build_2019-11.md )
- [(2019.11) Linux에서 Poco 라이브러리 사용하기](https://docs.google.com/document/d/17QCamZ0KrLKrnKAFg375EfTWy61QhgWqaswoYAIM9fo/edit?usp=sharing )
- [(2019.07) Poco 라이브러리 설치하기](https://jacking75.github.io/C++_poco_install/ )  
- [(2017.11) Poco 1.8 Net 라이브러리 빌드 하기](https://jacking75.github.io/cpp_poco_net_1-8_build/)
- [(2017.11) Poco 라이브러리 Visual Studio 2017 에서 빌드 하기](https://jacking75.github.io/cpp_poco_build_vs2017/ )
- [(2017.09) Poco 라이브러리를 VC++에서 static 라이브러리로 사용할 때](https://jacking75.github.io/C++_poco_use_static_lib/ )
  
   
### vcpkg 
가장 설치하기 쉬운 방법이다.  
vcpkg에 대한 설명은 검색을 하면 많이 나오니 직접 학습하기 바란다.  
vcpkg 설치 후에 아래 명령어로 POCO 라이브러리를 설치한다.  
```
vcpkg install poco --triplet x64-windows
```  
   
<br>     
   
   
## YOUTUBE 강의 
예제 코드는 poco_samples 디렉토리 안에 있다.  
     
- 01. 소개와 사용하기 [영상](https://youtu.be/GFU1HxxVKx0?si=9OiLYIoqFlaVPb4k ) [문서](https://docs.google.com/presentation/d/e/2PACX-1vSOnOCrEOzG2ibKyQhjEtWlvbROCwbn7S6ZihGm3fIuqZ0WOKiKyCqoEJQ8XakRH3mLcUFfmW-jkONJ/pub?start=false&loop=false&delayms=3000 )
- 02. Poco.Net을 이용한 네트워크 프로그래밍 소개 [영상](https://youtu.be/g49BA8I9aQ8?si=FCSpYFZMk9ej4USd ) [문서](https://docs.google.com/presentation/d/e/2PACX-1vSky41dsHEnn5SktQp__a3LfFree7hobZiHhKCtXovXecLphOdctzMf41CEGG2YRjcW_vGQJ4HM4t4N/pub?start=false&loop=false&delayms=3000 )
- 03. TCP Echo Server/Client [영상](https://youtu.be/U6VgV_vTa8w?si=RoUNOIkF1toictFA )  [문서](https://docs.google.com/presentation/d/e/2PACX-1vRhVRYBCO6QgAygV271R9unpvJ8A5C9bmeneJQsl_UoeBVNAndtjnj9pXNBgbln9_Db5oZ6JTTOhM_p/pub?slide=id.p1 ) 
    - 예제코드: `block_echo_server`  `block_echo_client`  
	
   