// from server: 83% by colin
struct Vec2 {
    float x;
    float y;
};

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
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
    extern int (__stdcall *GetClientRect)(void*, Rect*);
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
    EnterCriticalSection(criticalSection);

    Rect rect;
    GetClientRect(window->handle, &rect);

    float cx = (float)(rect.right - rect.left) * g_scale;
    float cy = (float)(rect.bottom - rect.top) * g_scale;

    Vec2 scaled;
    scaled.x = cx;
    scaled.y = cy;

    Vec2* offset = sample(&scaled, input, 10);
    result.x = offset->x + scaled.x;
    result.y = offset->y + scaled.y;

    LeaveCriticalSection(criticalSection);
    return result;
}
