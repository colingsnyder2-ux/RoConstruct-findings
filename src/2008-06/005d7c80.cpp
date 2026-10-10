// from server: 52% by tester
struct GetSetImpl {
    void* vtable;
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
        *(void**)p = (void*)0x83d2e0;
        *(void**)((char*)p + 0xc) = g;
    } else {
        p = 0;
    }
    this->vtable = p;
}
