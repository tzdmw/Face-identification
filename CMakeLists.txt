cmake_minimum_required(VERSION 3.5)

project(cam VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)
set(USE_SSE2_INSTRUCTIONS ON)
set(USE_SSE4_INSTRUCTIONS ON)
set(USE_AVX_INSTRUCTIONS ON)
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(cam
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
         mainwindow.h
         mainwindow.cpp
         mainwindow.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET cam APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(cam SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(cam
            ${PROJECT_SOURCES}
        )
    endif()
endif()
include_directories(
    C:/Users/yqh/Downloads/dlib-19.24/build/include)
include_directories(
    C:/Users/yqh/Downloads/opencv/build/install/x64/mingw/lib
)
file(GLOB OPENCV_LIBS "C:/Users/yqh/Downloads/opencv/build/install/x64/mingw/lib/libopencv_*.a")
target_link_libraries(cam PRIVATE Qt${QT_VERSION_MAJOR}::Widgets C:/Users/yqh/Downloads/dlib-19.24/build/lib/libdlib.a ${OPENCV_LIBS} imm32 comctl32 winmm )

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.cam)
endif()
set_target_properties(cam PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
include_directories(
    C:/Users/yqh/Downloads/opencv/build/install/include
    C:/Users/yqh/Downloads/opencv/build/install/include/opencv2
     C:/Users/yqh/Downloads/opencv/build/install/include/opencv
)
install(TARGETS cam
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(cam)
endif()
