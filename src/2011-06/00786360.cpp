// from server: 83% by atomic.potato
typedef int Bool;
typedef void *TypeInfo;

extern "C" TypeInfo __cdecl sub_0080bbc2(int);
extern "C" void __cdecl global_call(void *, TypeInfo);

struct TToolVerb
{
    int f();
    int unused;
    void *field_0C;
};

int TToolVerb::f()
{
    void *p = *(void **)((char *)field_0C + 0x0ACC);
    int value = *(int *)((char *)p + 0x188);
    if (value)
    {
        TypeInfo t = sub_0080bbc2(value);
        global_call((void *)0x00C518F4, t);
    }
    return 0;
}
