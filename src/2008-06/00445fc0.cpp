// from server: 46% by atomic.potato
extern "C" int __cdecl G1_func_00445e50(int *);

struct S
{
    int *field18;
    int f(int, int);
};

int S::f(int a, int b)
{
    int value;
    int *p = *reinterpret_cast<int **>(field18) + 3;
    value = G1_func_00445e50(&b);
    return ((int (__thiscall *)(int *, int, int))(*p))(field18, a, value);
}
