// from server: 64% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct S {
    char pad0[0x40];
    unsigned int field40;
    unsigned int field44;
    unsigned int f(unsigned int a, unsigned int b, unsigned int c);
};

unsigned int S::f(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int v = *(unsigned int*)(b + 0x14) - field40;
    unsigned int* p;
    if ((int)a < (int)v)
        p = &a;
    else
        p = &v;
    unsigned int edi = *p;

    unsigned int ecx = *(unsigned int*)(b + 0x18);
    char* eax = (char*)(b + 4);
    char* edx;
    if (ecx < 0x10)
        edx = eax;
    else
        edx = *(char**)eax;

    char* ecx2;
    if (ecx < 0x10)
        ecx2 = eax;
    else
        ecx2 = *(char**)eax;

    unsigned int eax2 = field40;
    ecx2 = (char*)((unsigned int)ecx2 + eax2);
    eax2 = eax2 - (unsigned int)ecx2;
    eax2 = eax2 + (unsigned int)edx;
    eax2 = eax2 + edi;

    if ((int)eax2 > 0)
    {
        memmove_s((void*)c, eax2, ecx2, eax2);
    }

    field40 += edi;

    unsigned int eax3 = field44;
    if ((eax3 & 1) == 0 && field40 == *(unsigned int*)(b + 0x14))
    {
        field44 = eax3 | 1;
    }

    return edi;
}
