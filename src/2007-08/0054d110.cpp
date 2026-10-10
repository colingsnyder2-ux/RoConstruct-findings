// from server: 61% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct Inner {
    char pad0[0x10];
    unsigned int* p10;
    char pad14[0x0c];
    unsigned int* p20;
    char pad24[0x0c];
    unsigned int* p30;
    char pad34[0x08];
    char b3c;
    char pad3d[0x03];
    char buf40[0x0c];
    unsigned int n4c;
    unsigned int n50;
    unsigned int n54;
};

struct Outer {
    virtual int vf0();
    virtual int vf1();
    virtual int vf2();
    virtual int vf3();
    virtual int vf4();
    virtual int vf5();
    virtual int vf6();
    virtual int vf7();
    virtual int vf8();
    virtual int vf9();
    virtual int vf10();
    virtual int vf11();
    virtual int vf12();
    virtual int vf13();
    virtual int vf14();
    virtual int vf15();
    virtual int vf16();
    virtual int vf17();
    virtual int vf18();
    virtual int vf19();
    virtual int vf20();
    virtual int vf21();
    int f();
};

int Outer::f()
{
    Inner* inner = (Inner*)this;
    if (*inner->p20 == 0)
        vf21();
    unsigned int* p = inner->p20;
    unsigned int cur = *p;
    unsigned int end = *inner->p30 + cur;
    if (cur < end)
        return *(unsigned char*)cur;
    unsigned int off = cur - *inner->p10;
    unsigned int* edi = &inner->n54;
    unsigned int* pe = edi;
    if ((int)inner->n54 < (int)off)
        pe = &off;
    unsigned int ebx = *pe;
    if (ebx != 0)
    {
        memmove_s((char*)inner->p10 + (inner->n54 - ebx), inner->n54 - ebx, (void*)ebx, ebx);
    }
    unsigned int base = inner->n4c;
    unsigned int newcur = base + inner->n54;
    *inner->p10 = newcur - ebx;
    *inner->p20 = newcur;
    *inner->p30 = 0;
    int r = ((int (__thiscall*)(char*, unsigned int, unsigned int))0x54b640)(inner->buf40, base + inner->n54, inner->n50 - inner->n54);
    if (r == -1)
    {
        inner->b3c = 1;
        r = 0;
    }
    unsigned int v = inner->n4c + inner->n54 + r - *inner->p20;
    *inner->p30 = v;
    if (r != 0)
        return *(unsigned char*)*inner->p20;
    return -1;
}
