// from server: 90% by atomic.potato
extern "C" void __fastcall sub_0098dec0(void *);

struct S
{
    void f(void *, void *);
};

void S::f(void *first, void *last)
{
    char *p = (char *)first;
    char *end = (char *)last;
    while (p != end)
    {
        sub_0098dec0(p + 8);
        p += 12;
    }
}
