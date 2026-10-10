// from server: 51% by colin
struct PropDescriptor {
    void* ptr;
    PropDescriptor(void* g, void* s);
};

extern "C" void* __cdecl operator_new(unsigned int size);

PropDescriptor::PropDescriptor(void* g, void* s)
{
    this->ptr = 0;
    void* mem = operator_new(0x10);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x7a5e3c;
        *(void**)((char*)mem + 0xc) = g;
    } else {
        mem = 0;
    }
    this->ptr = mem;
}
