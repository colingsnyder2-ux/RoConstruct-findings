// from server: 55% by tester
struct RefCounted
{
    void* vtable;
    int refcount;
    int weakcount;
    void* arg;
};

struct GenericSlotWrapper
{
    void* slot;
    GenericSlotWrapper(void* arg1, void* arg2);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GenericSlotWrapper::GenericSlotWrapper(void* arg1, void* arg2)
{
    slot = 0;
    RefCounted* p = (RefCounted*)operator_new(0x14);
    if (p)
    {
        p->refcount = 1;
        p->weakcount = 1;
        p->vtable = (void*)0x824794;
        p->arg = arg1;
    }
    slot = p;
}
