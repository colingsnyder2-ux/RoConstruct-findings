// from server: 56% by atomic.potato
struct S_func_0069a6b0 {
    int f(int, int);
};

extern "C" int __cdecl sub_0043dfb0(int, int);

int S_func_0069a6b0::f(int a, int b)
{
    int (__thiscall *fn)(int, int) = *(int (__thiscall **)(int, int))((*(int *)this) + 0x38);
    int r = fn(a, b);
    return sub_0043dfb0(r, b);
}
