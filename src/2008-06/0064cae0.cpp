// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Common {
    virtual void slot0();
    int owner;
    void f(int value);
};

struct Input : Common {
    char padding[160];
    unsigned char flag0;
    unsigned char flag1;
    unsigned char flag2;
};

struct Temporary {
    char data[48];
    Temporary();
};

struct State : Common {
    char padding[128];
    State(Input*, int, const Temporary&, const Temporary&);
};

struct ActiveState : State {
    ActiveState(Input*, int);
    virtual void slot0();
};

struct InactiveState : State {
    InactiveState(Input*, int);
    virtual void slot0();
};

struct Stage {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4(Common*);
    void remove(Input*);
};

struct Holder {
    char padding[8];
    Stage* stage;
    void f(Input*);
};

__forceinline ActiveState::ActiveState(Input* input, int value)
    : State(input, value, Temporary(), Temporary())
{
}

__forceinline InactiveState::InactiveState(Input* input, int value)
    : State(input, value, Temporary(), Temporary())
{
}

void Holder::f(Input* input)
{
    input->f((int)this);
    stage->remove(input);

    Common* replacement;
    if (input->flag0 || input->flag1 || input->flag2)
        replacement = new ActiveState(input, 0);
    else
        replacement = new InactiveState(input, 0);

    replacement->f((int)this);
    stage->slot4(replacement);
}
