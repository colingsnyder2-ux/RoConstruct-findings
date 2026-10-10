// from server: 34% by atomic.potato
extern "C" void sub_545ce0(void *, int, int, int);

struct S {
    void __cdecl f(void *);
};

void S::f(void *p)
{
    int a = *(int *)p;
    int b = 0;
    sub_545ce0((char *)a + 8, b, (int)&b, 0);
}
