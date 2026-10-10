// from server: 49% by colin
struct GetSetImpl {
    void* ptr;
    GetSetImpl(void* g, void* s);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GetSetImpl::GetSetImpl(void* g, void* s)
{
    void* mem;
    ptr = 0;
    mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x79adf4;
        *(void**)((char*)mem + 0xc) = g;
    } else {
        mem = 0;
    }
    ptr = mem;
}
