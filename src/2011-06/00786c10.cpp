// from server: 59% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl G1_func_0080bbc2(int);
extern "C" int __cdecl G2_func_00c903e0(int, int);

int S::f()
{
    int value;
    value = *(int *)(*(int *)((char *)this + 12) + 2764);
    if (value)
    {
        value = G1_func_0080bbc2(value);
        return G2_func_00c903e0(value, 0xC903E0);
    }
    return 0;
}
