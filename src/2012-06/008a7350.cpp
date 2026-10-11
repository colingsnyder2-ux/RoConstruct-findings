// from server: 81% by atomic.potato
extern "C" int __cdecl sub_00495F40(int);
extern "C" int __cdecl sub_00983B6A(int);
extern "C" int (__thiscall *g_call)(int);

struct TToolVerb
{
    int pad0;
    int pad1;
    int pad2;
    int material;
    unsigned char f();
};

unsigned char TToolVerb::f()
{
    int value = sub_00495F40(*(int *)(material + 0xAC4));
    if (value)
    {
        value = sub_00983B6A(value);
        g_call(value);
        return 1;
    }
    return 0;
}
