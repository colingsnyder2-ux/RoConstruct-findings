// from server: 18% by tester
extern "C" void *__cdecl malloc(unsigned int);

struct Inner
{
    void construct(void *);
};

struct Outer
{
    void *create(void *);
};

void Inner::construct(void *p)
{
    void *q = malloc(0x158);
    if (q)
    {
        Outer *o = (Outer *)q;
        o->create(p);
    }
}
