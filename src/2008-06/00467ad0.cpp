// from server: 84% by king_originala
extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
}

struct Rect {
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" {
    extern int (__stdcall *GetClientRect)(void*, Rect*);
}

struct WindowOwner {
    char reserved[0x20];
    void* window;
};

struct Vector2 {
    float x;
    float y;
};

struct DxUserInput {
    char reserved0[0x34];
    char criticalSection[0x2c];
    float offsetX;
    float offsetY;
    char reserved1[0x104];
    WindowOwner* owner;

    Vector2 getPosition();
};

Vector2 DxUserInput::getPosition()
{
    EnterCriticalSection(criticalSection);

    Rect rect;
    GetClientRect(owner->window, &rect);

    float width = static_cast<float>(rect.right - rect.left);
    float height = static_cast<float>(rect.bottom - rect.top);

    Vector2 result;
    result.x = width * 0.5f + offsetX;
    result.y = height * 0.5f + offsetY;

    LeaveCriticalSection(criticalSection);
    return result;
}
