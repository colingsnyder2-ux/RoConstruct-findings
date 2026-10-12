// from server: 76% by king_originala
#pragma pointers_to_members(full_generality, virtual_inheritance)

struct S;

struct Binder
{
    void (S::*function)();
    S *object;
};

struct Function
{
    unsigned char storage[40];

    Function(const Binder &);
    ~Function();
};

struct Connection
{
    unsigned char storage[16];

    ~Connection();
    Connection &operator=(const Connection &);
};

struct Signal
{
    Connection connect(void *, const Function &, int);
};

extern Signal signal1;
extern Signal signal2;

struct S
{
    unsigned char padding0[0x104];
    unsigned char *source;
    unsigned char padding1[0x94];
    Connection connection1;
    unsigned char padding2[4];
    Connection connection2;

    void callback1();
    void callback2();
    void f();
};

void S::f()
{
    Binder binder;
    binder.function = &S::callback1;
    binder.object = this;

    {
        Function function(binder);
        connection1 = signal1.connect(source ? source + 0x14 : 0,
                                      function, 10);
    }

    binder.function = &S::callback2;
    binder.object = this;

    {
        Function function(binder);
        connection2 = signal2.connect(source ? source + 0x14 : 0,
                                      function, 10);
    }
}
