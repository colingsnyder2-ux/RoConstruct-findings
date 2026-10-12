// from server: 89% by king_originala
struct Vec2
{
    float x, y;

    Vec2(float a, float b) : x(a), y(b) {}
    Vec2(const Vec2& v) : x(v.x), y(v.y) {}
};

struct Service
{
    Vec2 transform(void*, int, const Vec2&, double, int, int, int, int, int);
};

extern Service* service;

struct S
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual int height();

    void* context;

    Vec2 f(int, const Vec2&, double, int, int, int, int, int);
};

Vec2 S::f(int a, const Vec2& position, double b,
          int c, int d, int e, int g, int h)
{
    float x = position.x;
    int top = height() - 1;
    Vec2 adjusted(x, top - position.y);
    Vec2 result = service->transform(context, a, adjusted, b, c, d, e, g, h);
    return Vec2(result.x, result.y);
}
