// from server: 77% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl invalid_parameter_noinfo();

struct S
{
    unsigned char pad[1];
    S *f();
};

S *S::f()
{
    S *p = f();
    DWORD value = *(DWORD *)((char *)p + 12);
    if (value > *(DWORD *)((char *)p + 16))
        invalid_parameter_noinfo();
    *(DWORD *)((char *)p + 4) = value;
    *(DWORD *)p = *(DWORD *)p;
    return p;
}
