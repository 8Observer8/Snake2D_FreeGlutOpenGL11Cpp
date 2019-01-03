#pragma once
class Game
{
public:
    Game();
    ~Game();

    int GetScore() { return _score; }

private:
    int _score = 0;
};

