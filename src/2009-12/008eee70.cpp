// from server: 80% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct VTable
    {
        int (*unknown)();
        int padding[105];
        int (*function)();
    };

    VTable* object = *(VTable**)((char*)this + 0x278);
    return object->function();
}
