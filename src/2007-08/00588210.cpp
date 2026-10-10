// from server: 52% by colin
struct GetSetImpl {
    void* get;
    void* set;
    void* vtable;
    void* pad;
    void* val;
    GetSetImpl* ctor(void* g, void* s);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GetSetImpl* GetSetImpl::ctor(void* g, void* s) {
    GetSetImpl* p = 0;
    this->get = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7aea14;
        *(void**)((char*)mem + 0xc) = g;
        p = (GetSetImpl*)mem;
    } else {
        p = 0;
    }
    this->get = p;
    return this;
}
