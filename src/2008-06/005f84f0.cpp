// from server: 52% by colin
struct S {
    void* field0;
    S* construct(void* arg);
};

extern "C" void* __cdecl func_006a0920(unsigned int size);

S* S::construct(void* arg)
{
    field0 = 0;
    void* p = func_006a0920(0x10);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x840878;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
