// from server: 37% by atomic.potato
struct CXTCaptionButton
{
    int f();
};

struct Helper
{
    int operator()(CXTCaptionButton *);
};

int CXTCaptionButton::f()
{
    struct VTable
    {
        int (*get)();
    };

    struct Object
    {
        VTable *vtable;
    };

    Object *p = (Object *)((char *)this + 0);
    int ok = p->vtable->get();
    if (!ok)
        return 0;

    Object *q = (Object *)Helper()(this);
    return q->vtable->get();
}
