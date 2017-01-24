#pragma once

#include "hello_world.hpp"

namespace helloworld {

    class HelloWorldImpl : public helloworld::HelloWorld {
    public:
        // Constructor
        HelloWorldImpl();

        // Method that returns a string
        std::string get_hello_world();
    };
}
