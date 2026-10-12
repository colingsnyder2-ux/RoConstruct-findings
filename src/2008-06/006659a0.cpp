// from server: 81% by king_originala
struct Input {
    char padding[8];
    short x;
    short y;
};

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void update();

    char padding[40];
    float x;
    float y;

    S* f(const Input* input);
};

S* S::f(const Input* input)
{
    x = input->x;
    y = input->y;
    update();
    return this;
}
