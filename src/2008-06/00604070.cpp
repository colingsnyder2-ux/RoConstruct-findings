// from server: 84% by colin
// from server: 80% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    unsigned char storage[28];
public:
    basic_string(const T*);
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

struct Object {
    virtual void reserved();
    virtual void setName(const String&);
};

struct RefCounted {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long refcount;
    volatile long weakrefcount;
};

struct Shared {
    Object* object;
    RefCounted* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->refcount);
}

inline Shared::~Shared()
{
    if (control) {
        RefCounted* p = control;
        if (_InterlockedDecrement(&p->refcount) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weakrefcount) == 0)
                p->destroy();
        }
    }
}

struct Point {
    unsigned short x;
    unsigned short y;
    Point();
};

inline Point::Point() : x(0), y(0)
{
}

struct Color {
    float r, g, b, a;
    Color(float, float, float, float);
    Color(const Color&);
};

inline Color::Color(float red, float green, float blue, float alpha)
    : r(red), g(green), b(blue), a(alpha)
{
}

inline Color::Color(const Color& other)
    : r(other.r), g(other.g), b(other.b), a(other.a)
{
}

struct Description {
    int type;
    int enabled;
    Point point;
    int mode;
    Color color;

    Description(int, int, Point, int, const Color&);
};

inline Description::Description(int t, int e, Point p, int m,
                                const Color& c)
    : type(t), enabled(e), point(p), mode(m),
      color(c.r, c.g, c.b, c.a)
{
}

const Color& __cdecl sub_7baf10();
Shared __cdecl sub_601db0(Description);

struct UnifiedImageWidget {
    Shared method(int);
    void sub_602cb0(int, Shared);
};

Shared UnifiedImageWidget::method(int argument)
{
    Shared result = sub_601db0(
        Description(3, 1, Point(), 1, sub_7baf10()));

    {
        String name("RightPalette");
        result.object->setName(name);
    }

    sub_602cb0(argument, result);
    return Shared(result);
}
