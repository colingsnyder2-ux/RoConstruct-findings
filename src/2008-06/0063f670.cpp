// from server: 72% by king_originala
struct Input {
    char padding[8];
    unsigned int value;
};

struct State {
    unsigned int padding;
    unsigned int active;
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

    char padding0[32];
    State* state;
    unsigned char enabled;
    char padding1[19];
    unsigned int value;
    unsigned int x;
    unsigned int y;

    void prepare(Input*);
    S* fallback(Input*);
    S* f(Input*);
};

S* S::f(Input* input)
{
    prepare(input);
    if (!state || !state->active)
        return fallback(input);

    value = input->value;
    x = 0;
    y = 0;
    enabled = 1;
    update();
    return this;
}
