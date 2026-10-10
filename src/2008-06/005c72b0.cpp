// from server: 86% by atomic.potato
struct S
{
    int pad0[3];
    int field0C;
    int pad10[234];
    int field3B0;
    int f();
};

typedef int (__stdcall *Fn)(int);

extern "C" int __cdecl helper(int);
extern "C" Fn imported;

int S::f()
{
    int value = field0C;
    value = *(int *)((char *)value + 0x204);
    value = *(int *)((char *)value + 0x3b0);
    if (value)
    {
        value = helper(value);
        return imported(value);
    }
    return 0;
}
