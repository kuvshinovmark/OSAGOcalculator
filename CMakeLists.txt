cmake_minimum_required (VERSION 3.0)

project(OSAGO)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/msvc2019_64")

install(DIRECTORY ${PROJECT_SOURCE_DIR}/Calculator/img/ DESTINATION bin/img)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/Calculator/data/ DESTINATION bin/data)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_executable(
OSAGO
	"Calculator/main.cpp"  
	"Calculator/AddFunctions.cpp" 
	"Calculator/Calculation.cpp" 
	"Calculator/Introduction.cpp" 
	"Calculator/mainwindow.cpp" 
	"Calculator/secondwindow.cpp" 
	"Calculator/AddFunctions.h" 
	"Calculator/Calculation.h" 
	"Calculator/Introduction.h" 
	"Calculator/mainwindow.h" 
	"Calculator/secondwindow.h" 
)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Gui REQUIRED)
target_link_libraries(OSAGO PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui)

install(TARGETS OSAGO DESTINATION bin)

install(FILES $<TARGET_FILE:Qt5::Core> DESTINATION bin)
install(FILES $<TARGET_FILE:Qt5::Gui> DESTINATION bin)
install(FILES $<TARGET_FILE:Qt5::Widgets> DESTINATION bin)

install(FILES $<TARGET_FILE:Qt5::QWindowsIntegrationPlugin> DESTINATION bin/platforms)
install(FILES $<TARGET_FILE:Qt5::QWindowsDirect2DIntegrationPlugin> DESTINATION bin/platforms)