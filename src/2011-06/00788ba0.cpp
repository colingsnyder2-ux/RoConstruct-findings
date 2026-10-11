// from server: 74% by atomic.potato
extern "C" int __cdecl sub_0080bbc2(int);

typedef int (__cdecl *FunctionType)(int);

struct TToolVerb
{
    int f();
    int field_0c;
};

int TToolVerb::f()
{
    int value = *(int *)((char *)this + 0x0C);
    value = *(int *)((char *)value + 0xACC);
    value = *(int *)((char *)value + 0x188);
    if (value == 0)
        return 0;
    value = sub_0080bbc2(value);
    return ((FunctionType)*(void **)0x00A40A50)(value);
}
