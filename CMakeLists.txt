cmake_minimum_required(VERSION 3.12)
project(c_study)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_study
        .idea/codeStyles/Project.xml
        .idea/c-study.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        Main.cpp
        array/ArrayDemo.h
        array/ArrayDemo.cpp
        pointer/PointerDemo.cpp pointer/PointerDemo.h comprehensive_case/SavingsAccount.cpp comprehensive_case/SavingsAccount.h extends/ExtendsDemo.cpp extends/ExtendsDemo.h extends/A.h extends/B.h)
