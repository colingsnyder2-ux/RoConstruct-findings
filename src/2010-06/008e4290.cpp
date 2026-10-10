// from server: 42% by atomic.potato
struct S
{
    struct VTable
    {
        void* slot[20];
    };

    VTable* value;

    void* f();
};

void* S::f()
{
    return value->slot[19];
}
