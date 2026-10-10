// from server: 96% by atomic.potato
struct S
{
    void __cdecl f(void *);
};

extern "C" void __cdecl sub_90dc10(void *, int);
extern "C" void __cdecl sub_982114(void *);

void __cdecl S::f(void *p)
{
    if (p)
    {
        sub_90dc10(p, *(int *)((char *)p + 12));
        sub_982114(p);
    }
}
