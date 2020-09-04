#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int main(int arc, char* args[]){
    SDL_Window* window = NULL;
    SDL_Surface* surface = NULL;
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "Couldn't initialize! Error: " << SDL_GetError() << std::endl;
    }
    else {
        window = SDL_CreateWindow("Pop Up SDL Program", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        SDL_Delay(5000);
    }
    return 0;
}
