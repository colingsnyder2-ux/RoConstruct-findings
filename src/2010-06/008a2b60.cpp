// from server: 71% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int __cdecl func_007b8690(int);
typedef int (__thiscall *Method)(int *, int, int);

int S::f(int value)
{
    int object = func_007b8690(*(int *)((char *)this + 0x100));
    int target = *(int *)(*(int **)object + 0x16c);
    return ((Method)target)((int *)object, value,
                            *(int *)((char *)this + 0x174));
}
