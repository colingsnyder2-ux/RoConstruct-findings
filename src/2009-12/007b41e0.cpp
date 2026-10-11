// from server: 42% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl g(char *, unsigned int, unsigned int);

void S::f()
{
    char *p = *(char **)((char *)this + 4);
    unsigned int n = *(unsigned int *)((char *)this + 0x14);
    unsigned int c = *(unsigned int *)((char *)this + 0x18);
    char *q = c < 0x10 ? (char *)this + 4 : p;
    char r = 0;
    g(&r, (unsigned int)q, n);
}
