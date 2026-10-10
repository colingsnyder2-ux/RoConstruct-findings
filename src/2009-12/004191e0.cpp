// from server: 72% by atomic.potato
struct S
{
    int f(void *, void *);
};

int S::f(void *a, void *b)
{
    struct V
    {
        void *vtable;
    };

    struct Base
    {
        char pad[0x20];
        V *object;
    };

    Base *base = (Base *)((char *)a - 0xcc);
    V *object = base->object;
    return ((int (__thiscall *)(V *, void *))((char *)object->vtable + 0x1b8))(object, b);
}
