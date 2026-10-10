// from server: 90% by atomic.potato
extern "C" void __cdecl release(void *);

struct S
{
    void clear();
    void *a;
    void *b;
    void *c;
    void *d;
    void *e;
    void *f;
    void *g;
    void *h;
    void *i;
};

void S::clear()
{
    if (d)
        release(d);
    d = 0;
    e = 0;
    f = 0;
}
