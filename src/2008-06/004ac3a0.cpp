// from server: 44% by colin
// roc 2008-06 004ac3a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac3a0

extern "C" void* __cdecl operator_new(unsigned int size);

struct TGenericSlotWrapper {
    void* field0;
    void* construct(void* arg1, void* arg2);
};

void* TGenericSlotWrapper::construct(void* arg1, void* arg2)
{
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x82476c;
        *(void**)((char*)p + 0xc) = arg1;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
