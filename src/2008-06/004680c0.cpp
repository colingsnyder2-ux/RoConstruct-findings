// from server: 92% by Espeon
// from server: 82% by king_originala
struct Point {
    int x;
    int y;
};

struct Vec2 {
    float x;
    float y;
};

extern "C" __declspec(dllimport) int __stdcall ClientToScreen(void *, Point *);
extern "C" __declspec(dllimport) int __stdcall SetCursorPos(int, int);
extern "C" __declspec(dllimport) void* __stdcall LoadCursorA(void *, const char *);
extern "C" __declspec(dllimport) void* __stdcall SetCursor(void *);
extern "C" __declspec(dllimport) int __stdcall InvalidateRect(void *, const void *, int);

extern void initializeCursor();

struct Device;
struct DeviceTable {
    void *slots[8];
    long (__stdcall *unacquire)(Device *);
};

struct Device {
    DeviceTable *table;
};

struct Window {
    char padding[0x20];
    void *handle;
};

struct DxUserInput {
    char padding0[0x59];
    unsigned char flag59;
    char padding1[0x112];
    Window *window;
    char padding2[8];
    Device *device;
    char padding3[0x16];
    unsigned char flag192;

    Vec2 *getPosition(Vec2 *);
    void releaseInput();
};

void DxUserInput::releaseInput()
{
    device->table->unacquire(device);

    Vec2 position;
    getPosition(&position);

    Point point;
    int y = (int)position.y;
    point.x = (int)position.x;
    point.y = y;

    ClientToScreen(window->handle, &point);
    SetCursorPos(point.x, point.y);

    static void *cursor =
        (initializeCursor(), LoadCursorA(0, (const char *)0x7f00));

    SetCursor(cursor);
    InvalidateRect(window->handle, 0, 1);
    flag192 = 0;
    flag59 = 0;
}
