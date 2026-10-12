// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Ref
{
    void* object;
    Control* control;
    ~Ref();
};

struct Tail
{
    unsigned int data;
    ~Tail();
};

struct Base
{
    unsigned int data[112];
    int* table;
    ~Base();
};

struct S : Base
{
    unsigned char padding[0xa4];
    Ref ref;
    unsigned int reserved;
    Tail tail;
    ~S();
};

__forceinline Ref::~Ref()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
    int* t = table;
    data[0x00 / 4] = 0x843eb4;
    data[0x10 / 4] = 0x843ea4;
    data[0x14 / 4] = 0x843e9c;
    data[0x20 / 4] = 0x843e94;
    data[0x24 / 4] = 0x843e84;
    data[0x44 / 4] = 0x843e74;
    data[0x64 / 4] = 0x843e64;
    data[0x84 / 4] = 0x843e54;
    data[0xa4 / 4] = 0x843e44;
    data[0xc4 / 4] = 0x843e34;
    data[0x130 / 4] = 0x843e2c;
    data[0x1a0 / 4] = 0x843e24;
    data[0x1b0 / 4] = 0x843e0c;
    *reinterpret_cast<unsigned int*>(
        reinterpret_cast<char*>(this) + 0x1c0 + t[1]) = 0x843e04;
    int offset = table[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x1bc + offset) = offset - 0xd4;
}
