// from server: 91% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct VTable
    {
        void *unknown;
        int (__thiscall *call)(void *);
    };

    struct Object
    {
        char padding[0x288];
        VTable *vtable;
    };

    Object *object = *(Object **)((char *)this + 0x0c);
    int (__thiscall *function)(void *) = object->vtable->call;
    int value = function((char *)object + 0x288);
    return *(int *)((char *)value + 0x1d4) == 3;
}
