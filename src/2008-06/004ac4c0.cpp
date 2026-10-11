// from server: 43% by colin
// roc 2008-06 004ac4c0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac4c0

extern "C" void* __cdecl operator_new(unsigned int size);

struct GenericSlotWrapper
{
    void* ptr;
    GenericSlotWrapper* construct(void* arg);
};

GenericSlotWrapper* GenericSlotWrapper::construct(void* arg)
{
    void* mem = operator_new(0x14);
    if (mem)
    {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x824794;
        *(void**)((char*)mem + 0xc) = arg;
    }
    else
    {
        mem = 0;
    }
    this->ptr = mem;
    return this;
}
