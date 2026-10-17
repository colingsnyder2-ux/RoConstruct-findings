// from server: 83% by colin
struct Short2
{
    short x, y;
};

struct Vec2
{
    float x, y;
    Vec2(const Short2&);
};

extern void __cdecl modeOne(float*, float*, const Vec2&);
extern void __cdecl modeZero(float*, float*, const Vec2&);
extern void __cdecl absolutePosition(float*, float*, const Vec2&, const Vec2&);
extern void __cdecl insidePosition(float*, float*, const Vec2&, const Vec2&);
extern void __cdecl outsidePosition(float*, float*, const Vec2&, const Vec2&);
extern bool __cdecl specialMode();

struct DxUserInput
{
    char padding0[0x59];
    bool flag;
    char padding1[2];
    int mode;
    Vec2 position;

    bool keyMode();
    bool inside();
    Short2 getPosition();
    void f(float*, float*);
};

void DxUserInput::f(float* x, float* y)
{
    switch (mode)
    {
    case 0:
        if (keyMode() || flag)
        {
            Short2 p = getPosition();
            Vec2 v(p);
            absolutePosition(x, y, position, v);
        }
        else if (specialMode())
        {
            modeZero(x, y, position);
        }
        else if (inside())
        {
            Vec2 p(getPosition());
            insidePosition(x, y, position, p);
        }
        else
        {
            Vec2 p(getPosition());
            outsidePosition(x, y, position, p);
        }
        break;

    case 1:
        modeOne(x, y, position);
        break;
    }
}
