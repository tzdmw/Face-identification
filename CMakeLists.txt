cmake_minimum_required(VERSION 3.5)

project(eye_face VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        include/constants.h include/findEyeCenter.h include/findEyeCorner.h include/helpers.h src/findEyeCenter.cpp src/findEyeCorner.cpp src/helpers.cpp src/findKeyPoints.cpp include/findKeyPoints.h)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(eye_face
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET eye_face APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(eye_face SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(eye_face
            ${PROJECT_SOURCES}
        )
    endif()
endif()
include_directories(
        C:/Users/yqh/Downloads/dlib-19.24/build/include)
include_directories(
        C:/Users/yqh/Downloads/opencv/build/install/x64/mingw/lib
)
include_directories(include)
file(GLOB OPENCV_LIBS "C:/Users/yqh/Downloads/opencv/build/install/x64/mingw/lib/libopencv_*.a")
target_link_libraries(eye_face PRIVATE Qt${QT_VERSION_MAJOR}::Widgets C:/Users/yqh/Downloads/dlib-19.24/build/lib/libdlib.a ${OPENCV_LIBS} imm32 comctl32 winmm)
include_directories(
        C:/Users/yqh/Downloads/opencv/build/install/include
        C:/Users/yqh/Downloads/opencv/build/install/include/opencv2
        C:/Users/yqh/Downloads/opencv/build/install/include/opencv
)
# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set(USE_SSE2_INSTRUCTIONS ON)
set(USE_SSE4_INSTRUCTIONS ON)
set(USE_AVX_INSTRUCTIONS ON)
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.eye_face)
endif()
set_target_properties(eye_face PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS eye_face
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(eye_face)
endif()
