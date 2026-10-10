// from server: 82% by atomic.potato
extern "C" void destroy_string(void *);

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
        destroy_string(p);
        p += 0x20;
    }
}
