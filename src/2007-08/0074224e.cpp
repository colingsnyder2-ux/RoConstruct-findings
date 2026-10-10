// from server: 69% by colin
extern "C" void __cdecl helper_630a1e(void *);
extern "C" void __cdecl helper_630a18(void *);

struct S {
    void __cdecl f(void *);
};

void S::f(void *p)
{
    unsigned char *q = (unsigned char *)p;
    unsigned int v = *(unsigned int *)(q - 4);
    v ^= (unsigned int)q;
    helper_630a1e((void *)v);
    helper_630a18((void *)0x849250);
}
