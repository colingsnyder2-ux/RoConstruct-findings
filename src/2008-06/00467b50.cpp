// from server: 75% by colin
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

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" int __stdcall GetClientRect(void*, Rect*);
extern Vec2 __cdecl sample(void*, int);

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

    float cx = (float)(rect.right - rect.left) * 0.5f;
    float cy = (float)(rect.bottom - rect.top) * 0.5f;

    Vec2 offset = sample(input, 10);
    result.x = offset.x + cx;
    result.y = offset.y + cy;

    LeaveCriticalSection(criticalSection);
    return result;
}
