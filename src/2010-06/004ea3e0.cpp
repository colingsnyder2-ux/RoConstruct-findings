// from server: 82% by atomic.potato
extern "C" void __cdecl function_004e6480(unsigned int);

struct S {
    void __cdecl f(void *, unsigned int);
};

void S::f(void *p, unsigned int n)
{
    if (n != 4) {
        function_004e6480(n);
        return;
    }

    *(unsigned int *)p = 0x00b92858;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
