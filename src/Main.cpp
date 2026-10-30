#include "Engine.hpp"

int main(int argc, char* argv[]) {
    Engine engine("Game", 1280, 720);

    if (!engine.init()) {
        return -1;
    }

    engine.run();
    return 0;
}