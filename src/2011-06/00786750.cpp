// from server: 97% by atomic.potato
extern "C" int __cdecl sub_0080BBC2(int);

extern "C" int (__thiscall *g_call)(int, int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int* a = *(int**)((char*)this + 12);
    int* b = *(int**)((char*)a + 0xACC);
    int v = *(int*)((char*)b + 0x188);
    if (v != 0)
    {
        v = sub_0080BBC2(v);
        return g_call(0xC9023C, v);
    }
    return 0;
}
