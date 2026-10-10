// from server: 86% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __cdecl sub_006a1de2(DWORD);
extern "C" DWORD __cdecl sub_00802878(DWORD, DWORD);

struct TToolVerb
{
    char pad[0x0c];
    DWORD *field_0c;
    int f();
};

int TToolVerb::f()
{
    DWORD *object = (DWORD *)field_0c[0x204 / 4];
    DWORD value = object[0x3b0 / 4];
    if (value)
    {
        value = sub_006a1de2(value);
        sub_00802878(0x95072c, value);
    }
    return 0;
}
