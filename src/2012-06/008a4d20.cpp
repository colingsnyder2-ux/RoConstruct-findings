// from server: 64% by atomic.potato
struct TToolVerb
{
    int value;
    int f();
};

typedef int (__cdecl *GetTypeInfoProc)(int);
typedef int (__cdecl *TypeInfoEqualProc)(int, int);

extern "C" int __cdecl sub_495f40(int);
extern "C" int __cdecl sub_983b6a(int);
extern "C" TypeInfoEqualProc g_typeInfoEqual;

int TToolVerb::f()
{
    int value = sub_495f40(*(int *)((char *)this + 0x0c));
    if (value)
    {
        value = sub_983b6a(value);
        return g_typeInfoEqual(0x00debb54, value);
    }
    return 0;
}
