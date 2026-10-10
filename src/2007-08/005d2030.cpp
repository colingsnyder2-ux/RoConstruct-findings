// from server: 52% by colin
struct GetSetImpl {
    void* ptr;
    GetSetImpl(void* g, void* s);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GetSetImpl::GetSetImpl(void* g, void* s)
{
    ptr = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7baf4c;
        *(void**)((char*)mem + 0xc) = g;
    } else {
        mem = 0;
    }
    ptr = mem;
}
