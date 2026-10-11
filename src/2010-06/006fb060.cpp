// from server: 71% by atomic.potato
extern "C" void *__cdecl AllocateEvent(int);

struct EventDesc
{
    void *f(void *, void *, void *);
};

struct Initializer
{
    void Initialize(void *, void *, void *, void *);
};

void *EventDesc::f(void *a, void *b, void *c)
{
    void *p = AllocateEvent(0);
    ((Initializer *)p)->Initialize(p, a, b, c);
    return a;
}
