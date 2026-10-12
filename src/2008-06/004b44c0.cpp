// from server: 81% by king_originala
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

struct Payload
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    void* object;
    Control* control;
};

struct Argument
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    void* object;
    Control* control;

    ~Argument();
};

inline Argument::~Argument()
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

struct S
{
    unsigned int tag;

    void func_004b3570(Payload*);
    S* func_004b44c0(Argument argument, unsigned int, unsigned int);
};

S* S::func_004b44c0(Argument argument, unsigned int, unsigned int)
{
    Payload value;
    value.first = argument.first;
    value.second = argument.second;
    value.third = argument.third;
    value.object = argument.object;
    value.control = argument.control;

    if (value.control)
        _InterlockedExchangeAdd(&value.control->strong, 1);

    tag = 0;
    func_004b3570(&value);

    Control* p = value.control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }

    return this;
}
