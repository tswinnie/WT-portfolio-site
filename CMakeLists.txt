CMAKE_MINIMUM_REQUIRED(VERSION 3.4)

PROJECT(Project_Name)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


SET (WT_CONNECTOR "wthttp" CACHE STRING "Connector used (wthttp or wtfcgi)")

ADD_SUBDIRECTORY(source)