// from server: 90% by atomic.potato
typedef int (__thiscall *FunctionType)(int);

extern "C" int __cdecl sub_006a1de2(int);
extern "C" FunctionType g_00802878;

struct S
{
    int f();
};

int S::f()
{
    int value = *(int *)((char *)this + 12);
    int object = *(int *)((char *)value + 516);
    int type = *(int *)((char *)object + 944);

    if (type)
    {
        int result = sub_006a1de2(type);
        return g_00802878(0x950bfc);
    }

    return 0;
}
