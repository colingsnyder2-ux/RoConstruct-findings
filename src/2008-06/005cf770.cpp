// from server: 95% by king_originala
struct Color
{
    float x, y, z, w;
};

extern const Color& __cdecl defaultColor();

struct Value
{
    int kind;
    int flags;
    unsigned short first;
    unsigned short second;
    int reserved;
    Color color;
};

struct A0
{
    virtual void f0();
    unsigned long padding[3];
};

struct A1
{
    virtual void f1();
};

struct A2
{
    virtual void f2();
    unsigned long padding[2];
};

struct A3
{
    virtual void f3();
};

struct A4
{
    virtual void f4();
    unsigned long padding[7];
};

struct A5
{
    virtual void f5();
    unsigned long padding[7];
};

struct A6
{
    virtual void f6();
    unsigned long padding[7];
};

struct A7
{
    virtual void f7();
    unsigned long padding[7];
};

struct A8
{
    virtual void f8();
    unsigned long padding[7];
};

struct A9
{
    virtual void f9();
    unsigned long padding[26];
};

struct A10
{
    virtual void f10();
    unsigned long padding[12];
};

struct Base : A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10
{
    Base();
    ~Base();
    void setValue(const Value&);
};

struct S : Base
{
    unsigned short first;
    unsigned short second;

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

    S();
};

S::S()
{
    first = 0;
    second = 0;

    Value value;
    value.kind = 2;
    value.flags = 0;
    value.first = 0;
    value.second = 0;
    value.reserved = 0;

    const Color& color = defaultColor();
    value.color.x = color.x;
    value.color.y = color.y;
    value.color.z = color.z;
    value.color.w = color.w;

    setValue(value);
}
