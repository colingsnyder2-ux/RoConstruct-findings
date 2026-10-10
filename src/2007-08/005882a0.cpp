// from server: 52% by colin
struct GetSetImpl {
    void* vtable;
    void* get;
    void* set;
    void* value;
    GetSetImpl(void* g, void* s);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GetSetImpl::GetSetImpl(void* g, void* s)
{
    this->vtable = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7aea28;
        *(void**)((char*)p + 0xc) = g;
    } else {
        p = 0;
    }
    this->vtable = p;
}
