// from server: 60% by atomic.potato
typedef int (__cdecl *FunctionType)(int);
typedef void (*CallType)(int, int);

extern "C" int __cdecl sub_0080bbc2(int);
extern "C" void sub_00a40a50(int, int);

struct TToolVerb
{
    int f();
};

int TToolVerb::f()
{
    int value = *(int *)(*(int *)((char *)this + 12) + 2764);
    if (!value)
        return 0;
    value = sub_0080bbc2(value);
    sub_00a40a50(0xC91210, value);
    return 0;
}
