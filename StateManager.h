//
// Created by kyoji on 6/6/2019.
//

#ifndef C_GAME_ENGINE_STATEMANAGER_H
#define C_GAME_ENGINE_STATEMANAGER_H

typedef unsigned int (*fnPtr)();
typedef unsigned int (*fnPtrFL)(float);

typedef struct {
    fnPtr       init;
    fnPtrFL     update;
    fnPtrFL     draw;
    fnPtr       destroy;
} State;

typedef struct {
    State **stack;
    int capacity;
    int top;
} StateManager;

int STATEMANAGER_init(StateManager *statemanager);
int STATEMANAGER_free(StateManager *statemanager);
int STATEMANAGER_push(StateManager *statemanager, State *state);
int STATEMANAGER_scale(StateManager *statemanager);
int STATEMANAGER_pop(StateManager *statemanager);
State *STATEMANAGER_top(StateManager *statemanager);
int STATEMANAGER_update(StateManager *statemanager, float deltatime);
int STATEMANAGER_draw(StateManager *statemanager, float deltatime);


#endif //C_GAME_ENGINE_STATEMANAGER_H


