// from server: 74% by atomic.potato
typedef unsigned long DWORD;

extern "C" void __cdecl invalid_parameter_noinfo();

struct S
{
};

DWORD __cdecl f(DWORD *out)
{
    DWORD *p;
    DWORD value;
    p = (DWORD *)0x662160;
    p = (DWORD *)((DWORD (__cdecl *)())p)();
    value = p[3];
    if (value > p[4])
        invalid_parameter_noinfo();
    p = (DWORD *)p[0];
    out[1] = value;
    out[0] = (DWORD)p;
    return (DWORD)out;
}
