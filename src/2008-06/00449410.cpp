// from server: 89% by king_originala
struct VItem
{
    struct Base
    {
        struct VTable
        {
            void *reserved[7];
            void (__thiscall *invoke)(Base *, void *, void *);
        };

        VTable *vtable;
    };

    Base *object;
    void *value;

    void *f(void *argument);
};

void *VItem::f(void *argument)
{
    volatile int local;
    Base *o = object;
    void *v = value;
    local = 0;
    o->vtable->invoke(o, argument, v);
    return argument;
}
