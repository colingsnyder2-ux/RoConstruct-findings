// from server: 77% by atomic.potato
struct S
{
    struct VTable
    {
        void (__thiscall *f34)(void *);
        void *pad[8];
        void (__thiscall *f58)(void *);
    };

    struct Inner
    {
        VTable *vtable;
        char pad[0x70];
        Inner *object;
    };

    char pad0[0x144];
    Inner *inner;

    void f();
};

void S::f()
{
    inner->object->vtable->f58(inner->object);
    inner->vtable->f34(inner);
}
