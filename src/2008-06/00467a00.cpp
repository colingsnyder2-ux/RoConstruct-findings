// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct DxUserInput
{
    char pad0[0x180];
    int m_a;
    int m_b;
    void f(int);
};

struct Helper
{
    void g();
};

extern "C" void __stdcall sub_577460(int, int);
extern "C" void __stdcall sub_5773C0(Helper*);

void DxUserInput::f(int arg)
{
    int local[4];
    local[0] = m_a;
    local[1] = m_b;
    if (local[1] != 0)
    {
        _InterlockedExchangeAdd((volatile long*)(local[1] + 4), 1);
    }
    ((Helper*)local)->g();
    sub_577460(m_a, arg);
    sub_5773C0((Helper*)local);
}
