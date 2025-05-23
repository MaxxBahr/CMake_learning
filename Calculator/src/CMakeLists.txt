cmake_minimum_required(VERSION 3.15)

project(Calculator LANGUAGES CXX)

target_link_libraries(Calculator PRIVATE calclib printer calcprint)