cmake_minimum_required(VERSION 3.16)
project(MyEngine CXX)

# Wymagamy standardu C++20 (idealny pod nowoczesny, czysty kod w C++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Szukamy pakietu SDL2 w systemie
find_package(SDL2 REQUIRED)

# Definiujemy pliki źródłowe i nagłówkowe
add_executable(${PROJECT_NAME}
    src/Main.cpp
    src/Engine.cpp
)

# Wskazujemy katalog z nagłówkami
target_include_directories(${PROJECT_NAME} PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${SDL2_INCLUDE_DIRS}
)

# Linkujemy bibliotekę SDL2 do naszego executable
target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES})
