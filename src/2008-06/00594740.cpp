// from server: 52% by colin
extern "C" void* __cdecl operator_new(unsigned int size);

struct VFunctionRef_holder
{
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

struct VFunctionRef
{
    VFunctionRef_holder* holder;
    VFunctionRef(void* p);
};

VFunctionRef::VFunctionRef(void* p)
{
    holder = 0;
    VFunctionRef_holder* h = (VFunctionRef_holder*)operator_new(0x10);
    if (h)
    {
        h->field4 = (void*)1;
        h->field8 = (void*)1;
        h->field0 = (void*)0x832258;
        h->fieldC = p;
    }
    else
    {
        h = 0;
    }
    holder = h;
}
