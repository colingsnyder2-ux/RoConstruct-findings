// from server: 97% by atomic.potato
typedef int (__cdecl *CompareTypeInfo)(const void *, const void *);
typedef int (__thiscall *InvokeType)(int);

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int (__thiscall *imported_9EA8D8)(int, int);

struct TToolVerb
{
    int f();
    int field_0C;
};

int TToolVerb::f()
{
    int value = *(int *)((char *)this + 0x0C);
    value = *(int *)((char *)value + 0xAA0);
    value = *(int *)((char *)value + 0x1B4);
    if (value)
    {
        value = sub_7A93C6(value);
        return imported_9EA8D8(0xBB7750, value);
    }
    return 0;
}
