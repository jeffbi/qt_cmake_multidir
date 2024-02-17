
add_library(OurLib STATIC
  ourlib.cpp
  ourlib.h
)

target_link_libraries(OurLib PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(OurLib PRIVATE OURLIB_LIBRARY)
