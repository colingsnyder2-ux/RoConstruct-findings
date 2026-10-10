// from server: 59% by atomic.potato
struct S
{
    void f(unsigned int a, unsigned int b, unsigned int c);
};

void __thiscall S::f(unsigned int a, unsigned int b, unsigned int c)
{
    *(unsigned int *)this = b;
    *((unsigned int *)this + 1) = a;
    *(unsigned short *)((char *)this + 8) = 0;
    *(unsigned short *)((char *)this + 10) = 0;
    *(unsigned short *)((char *)this + 12) = 0;
    *(unsigned short *)((char *)this + 14) = 0;
    *((unsigned int *)this + 4) = c;
}
