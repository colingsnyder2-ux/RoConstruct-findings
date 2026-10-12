// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void first() = 0;
    virtual void second() = 0;
    virtual void release() = 0;
    long unused;
    volatile long count;
};

struct Holder {
    void* object;
    Control* control;
    ~Holder();
};

struct Base {
    unsigned long words[80];
    ~Base();
};

struct Intermediate : Base {
    ~Intermediate();
};

struct BodyMover : Intermediate {
    Holder holder;
    ~BodyMover();
};

inline Holder::~Holder()
{
    if (control && _InterlockedExchangeAdd(&control->count, -1) == 1)
        control->release();
}

inline Intermediate::~Intermediate()
{
    words[76] = 0x0083d1f4;
}

BodyMover::~BodyMover()
{
    words[0] = 0x00846bec;
    words[4] = 0x00846be0;
    words[5] = 0x00846bd8;
    words[8] = 0x00846bd0;
    words[9] = 0x00846bc0;
    words[17] = 0x00846bb0;
    words[25] = 0x00846ba0;
    words[33] = 0x00846b90;
    words[41] = 0x00846b80;
    words[49] = 0x00846b70;
    words[76] = 0x00846b54;
    words[78] = 0x00846b48;
}
