#pragma once

#include <SDL2/SDL.h>
#include <string>

class Engine {
public:
    Engine(const std::string& title, int width, int height);
    ~Engine();

    bool init();
    void run();
    void clean();

private:
    void handleEvents();
    void update(float deltaTime);
    void render();

    std::string m_title;
    int m_width;
    int m_height;
    bool m_isRunning;

    SDL_Window* m_window;
    SDL_Renderer* m_renderer;
};