// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object
{
    void invoke(int);
};

struct Control
{
    long reserved;
    volatile long references;

    void add_reference();
};

inline void Control::add_reference()
{
    _InterlockedExchangeAdd(&references, 1);
}

struct Shared
{
    Object* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->add_reference();
}

struct Guard
{
    char storage[12];

    Guard(Shared);
    ~Guard();
};

struct DxUserInput
{
    char padding[0x180];
    Shared input;

    void func_00467a00(int);
};

void DxUserInput::func_00467a00(int value)
{
    Guard guard(input);
    input.object->invoke(value);
}
