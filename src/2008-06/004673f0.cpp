// from server: 63% by king_originala
struct RECT
{
    long left, top, right, bottom;
};

extern "C" int (__stdcall *GetClientRect)(void*, RECT*);

struct Bounds
{
    float x, y, width, height;
    Bounds(float, float, float, float);
};

inline Bounds::Bounds(float a, float b, float c, float d)
    : x(a), y(b), width(c), height(d)
{
}

struct Window
{
    char padding[0x20];
    void* handle;
};

struct CSettingsDialog
{
    char padding[0x16c];
    Window* window;
    void getBounds(Bounds* result);
};

void CSettingsDialog::getBounds(Bounds* result)
{
    RECT rect;
    GetClientRect(window->handle, &rect);
    *result = Bounds(0.0f, 0.0f,
                    (float)(rect.right - rect.left),
                    (float)(rect.bottom - rect.top));
}
