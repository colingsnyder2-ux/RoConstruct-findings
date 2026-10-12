// from server: 92% by king_originala
struct Rect {
    int left, top, right, bottom;
};

extern "C" {
    extern int (__stdcall *GetClientRect)(void *, Rect *);
    extern int (__stdcall *InflateRect)(Rect *, int, int);
}

extern void *__cdecl make_exception(void *);

typedef void (__thiscall *StringDestructor)(void *);
extern StringDestructor destroyString;

struct String {
    void *data;
    String(int);
    String(const String &);
    ~String();
};

inline String::String(int)
{
    make_exception(this);
}

inline String::~String()
{
    destroyString(this);
}

extern String __cdecl concatenate(const String &, const char *);
extern void __cdecl showHelp(Rect, void *, String, int);

inline const int &minimum(const int &a, const int &b)
{
    return a < b ? a : b;
}

struct S {
    char padding[0xb0];
    char browser[0x20];
    void *window;
    void f();
};

void S::f()
{
    Rect rect;
    GetClientRect(window, &rect);
    InflateRect(&rect, -12, -12);

    rect.right = (rect.right - rect.left) / 2;
    int height = rect.bottom - rect.top;
    int limit = 480;
    rect.bottom = minimum(height, limit) - rect.top;

    showHelp(rect, browser, concatenate(String(0), "/Game/Help.aspx"), 0);
}
