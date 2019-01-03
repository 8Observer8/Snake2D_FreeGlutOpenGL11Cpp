#include <gtest/gtest.h>

#include "Game.h"

TEST(Game, GetScore_DefaultValue_ReturnsZero)
{
    // Arrange
    Game game;
    int expectedScore = 0;

    // Act
    int actualScore = game.GetScore();

    // Assert
    ASSERT_EQ(actualScore, expectedScore);
}