// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_imagepoint_83d357d8fda704d8.cpp

// Candidate translation unit (score above; library headers required).

#include <boost/shared_ptr.hpp>
struct String { char storage[28]; __declspec(dllimport) String(const char*); __declspec(dllimport) ~String(); };

struct Object {
    virtual void reserved();
    virtual void setName(const String&);
};

typedef boost::shared_ptr<Object> Shared;

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

    Description(int, int, Point, int, Color);
};

inline Description::Description(int t, int e, Point p, int m,
                                Color c)
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
    Point point;
    Shared result = sub_601db0(
        Description(3, 1, point, 1, sub_7baf10()));

    {
        String name("RightPalette");
        result->setName(name);
    }

    sub_602cb0(argument, result);
    return Shared(result);
}