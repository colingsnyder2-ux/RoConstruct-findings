// from server: 52% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int size);

struct S {
    void* field0;
    S* construct(void* arg);
};

S* S::construct(void* arg)
{
    void* mem;
    this->field0 = 0;
    mem = func_0062fef6(0x10);
    if (mem != 0) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)((char*)mem + 0) = (void*)0x7a7888;
        *(void**)((char*)mem + 0xc) = arg;
    } else {
        mem = 0;
    }
    this->field0 = mem;
    return this;
}
