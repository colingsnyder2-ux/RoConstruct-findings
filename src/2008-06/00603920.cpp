// from server: 76% by colin
// from server: 71% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

template<class T> struct Pointer {
    T* object;
    Control* control;
    Pointer(const Pointer&);
    ~Pointer();
};

template<class T>
inline Pointer<T>::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

template<class T>
inline Pointer<T>::~Pointer()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Child;

struct Image {
    virtual void reserved() = 0;
    virtual void setName(const String&) = 0;
    void setChild(Pointer<Child>);
};

struct Color {
    float r, g, b, a;
};

struct Description {
    int kind;
    int flags;
    unsigned short width;
    unsigned short height;
    int enabled;
    float r, g, b, a;
    Description(float, float, float, float);
    Description(const Description&);
};

inline Description::Description(float red, float green, float blue, float alpha)
    : kind(3), flags(0), width(10), height(10), enabled(1),
      r(red), g(green), b(blue), a(alpha)
{
}

inline Description::Description(const Description& other)
    : kind(other.kind), flags(other.flags),
      width(other.width), height(other.height), enabled(other.enabled),
      r(other.r), g(other.g), b(other.b), a(other.a)
{
}

extern const Color& __cdecl zeroColor();
extern Pointer<Image> __cdecl createImage(Description);
extern Pointer<Child> __cdecl createChild(void*);

struct Widget {
    void* source;
    Pointer<Image> create();
};

Pointer<Image> Widget::create()
{
    const Color& color = zeroColor();
    Pointer<Image> result =
        createImage(Description(color.r, color.g, color.b, color.a));
    result.object->setName(String("ScoreHud"));
    {
        Pointer<Child> child = createChild(source);
        result.object->setChild(child);
    }
    return Pointer<Image>(result);
}
