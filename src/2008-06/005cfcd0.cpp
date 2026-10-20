// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_starterlabel_61f7c71491a0feee.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#pragma float_control(precise, off)

struct Vec2 {
    float x, y;
    Vec2(float, float);
};

__forceinline Vec2::Vec2(float xx, float yy)
    : x(xx), y(yy)
{
}

struct Rect {
    float x, y, z, w;
};

struct Color {
    float r, g, b, a;
};

struct Context {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual Rect bounds();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual Vec2 text(const std::string&, const Vec2&, double,
                      const Color&, int, int, int, int);
};

extern float inset;
extern const Color& __cdecl white();
extern int __cdecl fontSize(int);
extern int __cdecl textOptions();

struct S {
    void base(Context*);
    void* check();
    void draw(Context*);
};

void S::draw(Context* context)
{
    base(context);
    if (check()) {
        Rect rect = context->bounds();
        int size = fontSize(12);
        Vec2 position(inset + rect.x, rect.w - inset);

        const Color& source = white();
        Color color;
        color.r = source.r;
        color.g = source.g;
        color.b = source.b;
        color.a = 1.0f;

        std::string label(
            "StarterPack - these items will be given to each new player");
        context->text(label, position, double(size), color,
                      textOptions(), 1, 3, 0);
    }
}
