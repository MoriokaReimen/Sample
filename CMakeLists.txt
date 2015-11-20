cmake_minimum_required(VERSION 2.8)
project(Git_Introduction)

INCLUDE_DIRECTORIES("${CMAKE_CURRENT_LIST_DIR}/include" "${CMAKE_CURRENT_LIST_DIR}/include/Math3D" "${CMAKE_CURRENT_LIST_DIR}/include/IMU")
LINK_DIRECTORIES("${CMAKE_CURRENT_LIST_DIR}/lib")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

set(CMAKE_CXX_FLAGS "-D_WIN32_WINNT=0x0501 /wd4819 /EHsc /Ot /arch:SSE2")
set(CMAKE_C_FLAGS "-D_WIN32_WINNT=0x0501 /wd4819 /EHsc /Ot /arch:SSE2")
set(CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:LIBCMT")

set(MEMBER_SRC src/Member/Higa.cpp src/Member/Nakata.cpp src/Member/Sawada.cpp src/Member/Alex.cpp)

set(CMAKE_BUILD_TYPE Release)

add_library(member STATIC ${MEMBER_SRC})

add_executable(lunch src/main.cpp)
target_link_libraries(lunch member)
