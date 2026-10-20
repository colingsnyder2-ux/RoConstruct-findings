// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_espeon_chathudsize_2dc67214634728de.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <boost/shared_ptr.hpp>
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

    Style(int, int, const Size&, int, Color);
    Style(const Style&);
};

inline Style::Style(int k, int f, const Size& s, int e, Color c)
    : kind(k), flags(f), size(s), enabled(e), color(c)
{
}

inline Style::Style(const Style& s)
    : kind(s.kind), flags(s.flags), size(s.size),
      enabled(s.enabled), color(s.color)
{
}

typedef std::string String;
struct Object;
typedef boost::shared_ptr<Object> Pointer;
struct Object {
    virtual void unused();
    virtual void setName(const String&);
    void attach(Pointer);
};

Pointer __cdecl createWidget(Style);
Pointer __cdecl createChild();

inline const Pointer& reference(const Pointer& p){return p;}
Pointer __stdcall createChatHud()
{
    Pointer widget = createWidget(Style(2, 0, Size(25, 100), 1,
                                       defaultColor()));
    {String name("ChatHud");widget->setName(name);}
    widget->attach(reference(createChild()));
    return Pointer(widget);
}