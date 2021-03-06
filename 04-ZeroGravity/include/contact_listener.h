#pragma once

#include <box2d/box2d.h>
#include <iostream>

#include "user_data.h"
#include "mySensor.h"

class Game;

class MyContactListener : public b2ContactListener
{
public:
    explicit MyContactListener(Game& game);
    void BeginContact(b2Contact* contact) override;
    void EndContact(b2Contact* contact) override;

private:
    Game& game_;
};
