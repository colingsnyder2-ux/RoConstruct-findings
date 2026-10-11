// from server: 97% by atomic.potato
typedef int (__thiscall *CompareTypeInfo)(void *, void *);

extern "C" void *__cdecl sub_0080bbc2(void *);
extern "C" CompareTypeInfo g_call_00a40a50;

struct TToolVerb
{
    char padding[12];
    void *field_0c;
    int f();
};

int TToolVerb::f()
{
    void *a = *(void **)((char *)field_0c + 0xacc);
    void *b = *(void **)((char *)a + 0x188);
    if (b != 0)
    {
        b = sub_0080bbc2(b);
        return g_call_00a40a50((void *)0x00c90f20, b);
    }
    return 0;
}
