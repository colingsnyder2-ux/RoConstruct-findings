// from server: 50% by king_originala
struct Rect {
    int left, top, right, bottom;
};

extern "C" int __stdcall GetClientRect(void*, Rect*);

struct Window {
    char padding[0x20];
    void* handle;
};

struct Size {
    short x, y;
    Size() {}
};

struct CSettingsDialog {
    char padding[0x16c];
    Window* window;
    Size getClientSize();
};

Size CSettingsDialog::getClientSize()
{
    Rect rect;
    GetClientRect(window->handle, &rect);

    float width = (float)(rect.right - rect.left);
    float height = (float)(rect.bottom - rect.top);

    Size result;
    result.x = (short)width;
    result.y = (short)height;
    return result;
}
