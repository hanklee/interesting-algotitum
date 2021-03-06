#pragma once

#include "Evaluator.h"

class WzEvaluator : public Evaluator
{
public:
    WzEvaluator(void);
    virtual ~WzEvaluator(void);

    virtual int Evaluate(GameState& state, int max_player_id);

protected:
    int CountPlayerChess(GameState& state, int player_id, int& countThree, int& countTwo);
};
