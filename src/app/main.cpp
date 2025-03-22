#include <core.h>
#include <fmt/core.h>


int main() {
    fmt::print("Initializing core\n");
    Core core;
    fmt::print("Core created\n");
    core.~Core();
    fmt::print("Core destroyed\n");
    fmt::print("Exiting\n");
    return 0;
}
