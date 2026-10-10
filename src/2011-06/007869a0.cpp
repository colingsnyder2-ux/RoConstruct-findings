// from server: 79% by atomic.potato
typedef int (__cdecl *FunctionType)(int);

extern "C" int __cdecl sub_80bbc2(int);
extern FunctionType g_function;

struct TToolVerb
{
    int f();
    int pad0[3];
    int field0c;
};

int TToolVerb::f()
{
    int value = *(int *)(*(int *)(field0c + 0xacc) + 0x188);
    if (value != 0)
    {
        value = sub_80bbc2(value);
        return g_function(value);
    }
    return 0;
}
