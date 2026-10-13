// from server: 60% by colin
// from server: 55% by king_originala
struct Rect {
    long left, top, right, bottom;
};

typedef int (__stdcall *GetClientRectProc)(void *, Rect *);
extern GetClientRectProc GetClientRect;
extern int defaultRefreshRate;

struct Settings {
    int width;
    int height;
    int x;
    int y;
    int centered;
    int rgbBits;
    int alphaBits;
    int depthBits;
    int stencilBits;
    int refreshRate;
    unsigned char remaining[100];

    Settings();
    ~Settings();
};

struct Window;

struct WindowArgument {
    unsigned long state;
    void *value;
    unsigned char remaining[20];

    WindowArgument(Window *);
    ~WindowArgument();
};

extern void * __cdecl createWindow(const Settings *, void *);

struct Window {
    unsigned char padding0[32];
    void *handle;
    unsigned char padding1[100];
    unsigned char alpha;

    void attach(void *);
    void initialize(int, int);
};

void Window::initialize(int width, int height)
{
    Settings settings;
    settings.width = width;
    settings.height = height;
    settings.stencilBits = 8;
    settings.rgbBits = 8;
    settings.depthBits = 24;
    settings.alphaBits = alpha ? 8 : 0;
    settings.refreshRate = defaultRefreshRate;

    WindowArgument argument(this);
    Rect rect;
    GetClientRect(handle, &rect);

    void *window;
    try {
        window = createWindow(&settings, argument.value);
    }
    catch (...) {
        throw;
    }

    try {
        attach(window);
    }
    catch (...) {
        throw;
    }
}
