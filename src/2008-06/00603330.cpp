// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Color {
    float r, g, b, a;
    Color(const Color&);
};

inline Color::Color(const Color& c)
    : r(c.r), g(c.g), b(c.b), a(c.a)
{
}

const Color& __cdecl defaultColor();

struct Size {
    short width, height;
    Size(short, short);
};

inline Size::Size(short w, short h)
    : width(w), height(h)
{
}

struct Style {
    int kind;
    int flags;
    Size size;
    int enabled;
    Color color;

    Style(int, int, Size, int, const Color&);
    Style(const Style&);
};

inline Style::Style(int k, int f, Size s, int e, const Color& c)
    : kind(k), flags(f), size(s), enabled(e), color(c)
{
}

inline Style::Style(const Style& s)
    : kind(s.kind), flags(s.flags), size(s.size),
      enabled(s.enabled), color(s.color)
{
}

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Pointer {
    Object* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
    const Pointer& reference() const;
};

inline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Pointer::~Pointer()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

inline const Pointer& Pointer::reference() const
{
    return *this;
}

struct Object {
    virtual void unused();
    virtual void setName(const String&);
    void attach(Pointer);
};

Pointer __cdecl createWidget(Style);
Pointer __cdecl createChild();

Pointer __stdcall createChatHud()
{
    Pointer widget = createWidget(Style(2, 0, Size(25, 100), 1,
                                       defaultColor()));
    widget.object->setName(String("ChatHud"));
    widget.object->attach(createChild().reference());
    return Pointer(widget);
}
