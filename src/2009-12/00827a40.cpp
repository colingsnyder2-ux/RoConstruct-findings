// from server: 44% by atomic.potato
struct S_func_00827a10;

int func_00827a10(S_func_00827a10 *, int);

struct S_func_00827a40
{
    char pad0[148];
    S_func_00827a10 *m_value;
    int f(int);
};

int S_func_00827a40::f(int value)
{
    return func_00827a10(m_value, value);
}
