// from server: 17% by atomic.potato
struct S_func_007541b0
{
    float* __cdecl f(int value);
};

struct S_func_00695610
{
    char pad0[180];
    S_func_007541b0* m_value;
    int f();
};

float* S_func_007541b0::f(int value)
{
    return (float*)((char*)this + value * 12);
}

int S_func_00695610::f()
{
    m_value->f(0);
    return 0;
}
