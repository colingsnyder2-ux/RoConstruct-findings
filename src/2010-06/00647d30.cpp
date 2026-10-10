// from server: 97% by atomic.potato
typedef int (__cdecl *TypeInfoCompare)(const void *, const void *);
typedef int (__thiscall *ConvertFunction)(int);

extern "C" int __cdecl sub_007a93c6(int);
extern "C" int (__thiscall *sub_009ea8d8)(int, int);

struct TToolVerb
{
    int f();
    int pad0[3];
    int object;
};

int TToolVerb::f()
{
    int a = *(int *)(*(int *)(object + 0xaa0) + 0x1b4);
    if (a)
    {
        int b = sub_007a93c6(a);
        return sub_009ea8d8(0xbb73e4, b);
    }
    return 0;
}
