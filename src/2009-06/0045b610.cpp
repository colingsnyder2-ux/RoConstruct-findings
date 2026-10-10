// from server: 44% by colin
extern "C" void* __cdecl func_00718a38(unsigned int size);

struct S {
    void* field0;
    S* ctor(void* a, void* b);
};

S* S::ctor(void* a, void* b)
{
    void* p = func_00718a38(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x8ba2a0;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
