#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class SoundManager {
    public:
    static inline Sound attack;
    static inline Sound dead;
    static inline Sound gameOver;
    static inline Sound hit;
    static inline Sound shoot;
    static inline Music background;

    static void Load() {
        attack = LoadSound("audio/attack.mp3");
        dead = LoadSound("audio/dead.mp3");
        gameOver = LoadSound("audio/gameOver.mp3");
        hit = LoadSound("audio/hit.mp3");
        shoot = LoadSound("audio/shoot.mp3");
        background = LoadMusicStream("audio/background.mp3");

        SetMusicVolume(background, 0.2f);
        PlayMusicStream(background);
    }

    static void Unload() {
        UnloadSound(attack);
        UnloadSound(dead);
        UnloadSound(gameOver);
        UnloadSound(hit);
        UnloadSound(shoot);
        UnloadMusicStream(background);
    }
};
