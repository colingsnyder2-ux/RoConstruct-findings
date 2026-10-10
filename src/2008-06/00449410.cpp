// from server: 66% by atomic.potato
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

    void f(void *argument);
};

void VItem::f(void *argument)
{
    object->vtable->invoke(object, argument, value);
}
