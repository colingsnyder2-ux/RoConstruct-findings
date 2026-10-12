// from server: 72% by king_originala
extern float g_974d78;
extern float g_974d7c;

struct Vec2f {
    float x, y;

    Vec2f() {}
    Vec2f(float a, float b) : x(a), y(b) {}
    Vec2f(const Vec2f& v) : x(v.x), y(v.y) {}
};

extern "C" const Vec2f& __cdecl sub_509ba0();

struct Rect {
    Vec2f low, high;

    Rect(const Vec2f& a, const Vec2f& b) : low(a), high(b) {}
    Vec2f calculate(const Rect& bounds, int horizontal, int vertical) const;
};

struct S {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual Vec2f size();

    char pad[0x158];
    int m15c;
    int m160;
    short m164;
    short m166;

    Vec2f f();
};

Vec2f S::f()
{
    Vec2f unit(g_974d78, g_974d7c);
    Rect area(sub_509ba0(), unit);
    const Vec2f& extent = size();
    Rect bounds(sub_509ba0(), extent);

    float x = (float)m164;
    float y = (float)m166;

    area.low.x = area.low.x + x;
    area.low.y = area.low.y + y;
    area.high.x = area.high.x - x;
    area.high.y = area.high.y - y;

    return area.calculate(bounds, m15c, m160);
}
