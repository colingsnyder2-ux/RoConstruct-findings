// from server: 86% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct String;
extern "C" {
    extern void (__thiscall *constructString)(String*, const char*);
    extern void (__thiscall *destroyString)(String*);
}

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    constructString(this, text);
}

inline String::~String()
{
    destroyString(this);
}

struct Widget;
struct Child;

struct ChildShared {
    Child* pointer;
    Control* control;
    ~ChildShared();
};

struct Shared {
    Widget* pointer;
    Control* control;
    Shared(const Shared&);
    Shared(const ChildShared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::Shared(const ChildShared& other)
    : pointer((Widget*)other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

inline ChildShared::~ChildShared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Widget {
    virtual void reserved();
    virtual void setName(const String&);
    void setChild(Shared);
};

struct Color {
    float r, g, b, a;
    Color(const Color&);
};

inline Color::Color(const Color& c)
    : r(c.r), g(c.g), b(c.b), a(c.a)
{
}

struct Dimensions {
    short width;
    short height;
    Dimensions(short, short);
};

inline Dimensions::Dimensions(short w, short h)
    : width(w), height(h)
{
}

struct Description {
    int type;
    int reserved;
    Dimensions dimensions;
    int enabled;
    Color color;
    Description(int, int, Dimensions, int, Color);
    Description(const Description&);
};

inline Description::Description(int t, int r, Dimensions d, int e, Color c)
    : type(t), reserved(r), dimensions(d), enabled(e), color(c)
{
}

inline Description::Description(const Description& d)
    : type(d.type), reserved(d.reserved), dimensions(d.dimensions),
      enabled(d.enabled), color(d.color)
{
}

const Color& __cdecl defaultColor();
Shared __cdecl makeWidget(Description);
ChildShared __cdecl makeChild();

Shared __stdcall createWidget()
{
    Shared widget = makeWidget(
        Description(3, 0, Dimensions(60, 200), 1, defaultColor()));
    widget.pointer->setName(String("HealthHud"));
    widget.pointer->setChild(makeChild());
    return Shared(widget);
}
