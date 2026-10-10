// from server: 79% by atomic.potato
typedef int (__cdecl *FunctionType)(int);
typedef int (__thiscall *GlobalFunction)(int);

extern "C" int __cdecl Function_007a93c6(int);
extern "C" GlobalFunction Global_009ea8d8;

struct S {
    int value0;
    int value1;
    int value2;
    int value3;
    int f();
};

int S::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2720);
    a = *(int *)((char *)b + 436);

    if (a == 0)
        return 0;

    a = Function_007a93c6(a);
    return Global_009ea8d8(a);
}
