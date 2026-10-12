// from server: 87% by king_originala
extern "C" long __stdcall InterlockedDecrement(volatile long*);
extern "C" long __stdcall InterlockedIncrement(volatile long*);

extern const float minimumValue;
extern const float zeroValue;

struct Ref {
    virtual ~Ref();
    volatile long count;
    void dispose();
};

struct Handle {
    Ref* p;
    Handle(Ref*);
    ~Handle();
};

inline Handle::Handle(Ref* q) : p(q)
{
    InterlockedIncrement(&p->count);
}

inline Handle::~Handle()
{
    if (p) {
        if (InterlockedDecrement(&p->count) == 0) {
            p->dispose();
            if (p)
                delete p;
        }
        p = 0;
    }
}

struct State {
    char padding[0x1c8];
    int enabled;
};

struct Receiver {
    virtual void update(const Handle&, bool);
};

struct Holder {
    int padding;
    Receiver* receiver;
};

struct S : Ref {
    char padding[0xb4];
    State* state;
    char padding2[12];
    Ref* cached;
    Holder* holder;

    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void setValue(float);
    virtual float getValue();

    void f();
};

void S::f()
{
    if (state) {
        if (cached) {
            if (InterlockedDecrement(&cached->count) == 0) {
                cached->dispose();
                if (cached)
                    delete cached;
            }
            cached = 0;
        }

        {
            Handle reference(this);
            Receiver* receiver = holder->receiver;
            receiver->update(reference, state->enabled == 0);
        }

        if (state->enabled) {
            if (getValue() < minimumValue)
                setValue(minimumValue);
        } else {
            if (getValue() < zeroValue)
                setValue(0.0f);
        }
    }
}
