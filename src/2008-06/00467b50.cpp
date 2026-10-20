// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_inputsamplevectordb631a1da5ae712a.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off)
#include "G3D/Vector2.h"
// from server: 83% by colin
struct Vec2 { float x,y; };

struct Rect {
    long left;
    long top;
    long right;
    long bottom;
};

struct Window {
    char padding[0x20];
    void* handle;
};

extern "C" {
    extern void (__stdcall *enterCritical)(void*);
    extern void (__stdcall *leaveCritical)(void*);
    extern int (__stdcall *getClientRect)(void*, Rect*);
}

extern float g_scale;

extern Vec2* __cdecl sample(Vec2* out, void* input, int a);

struct DxUserInput {
    char padding0[0x34];
    char criticalSection[0x2c];
    char input[0x10c];
    Window* window;

    Vec2 f();
};

Vec2 DxUserInput::f()
{
    Vec2 result;
    enterCritical(criticalSection);

    Rect rect;
    getClientRect(window->handle, &rect);

    G3D::Vector2 scaled = G3D::Vector2((float)(rect.right-rect.left),(float)(rect.bottom-rect.top))*0.5f;
    Vec2 sampled;
    Vec2* offset=sample(&sampled,input,10);
    result.x=offset->x+scaled.x;
    result.y=offset->y+scaled.y;

    leaveCritical(criticalSection);
    return result;
}
