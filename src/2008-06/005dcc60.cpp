// from server: 63% by king_originala
struct Vec2 {
    float x, y;
    Vec2() {}
    Vec2(float a, float b) : x(a), y(b) {}
    Vec2 operator+(const Vec2 &v) const {
        return Vec2(x + v.x, y + v.y);
    }
    Vec2 operator*(float s) const {
        return Vec2(x * s, y * s);
    }
};

struct Vec3 {
    float x, y, z;
};

struct Rect {
    float x, y, width, height;
};

struct Color {
    float r, g, b, a;
    Color(float v) : r(v), g(v), b(v), a(v) {}
    Color(const Vec3 &v, float alpha)
        : r(v.x), g(v.y), b(v.z), a(alpha) {}
};

extern const float inset;
extern const float extentScale;
extern const float midpointScale;
extern const double textSize;

extern void __cdecl makeRect(Rect *, const Vec2 *, const Vec2 *);
extern const Vec3 &__cdecl zeroVector();
extern const Vec3 &__cdecl oneVector();

struct Device {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual Rect getRect();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void prepare(const Rect &, const Color &);
    virtual void slot12();
    virtual Vec2 draw(const void *, const Vec2 &, double,
                      const Color &, const Color &, int, int, int);
};

struct SignalDesc {
    unsigned char storage[0x140];
    void invoke(Device *);
};

void SignalDesc::invoke(Device *device)
{
    Rect viewport = device->getRect();
    Vec2 first(viewport.x + inset, viewport.y + inset);
    Vec2 second = first + Vec2(viewport.width, viewport.height) * extentScale;
    Vec2 center = (first + second) * midpointScale;
    Color background(midpointScale);
    Rect bounds;
    makeRect(&bounds, &first, &second);
    device->prepare(bounds, background);

    background = Color(zeroVector(), 1.0f);
    Color foreground(oneVector(), 1.0f);
    device->draw(storage + 0x140, center, textSize,
                 foreground, background, 2, 2, 0);
}
