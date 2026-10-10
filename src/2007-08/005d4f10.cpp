// from server: 52% by colin
struct S {
    void* field0;
    S* construct(void* arg1, void* arg2);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

S* S::construct(void* arg1, void* arg2)
{
    field0 = 0;
    void* p = sub_62FEF6(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)((char*)p + 0) = (void*)0x7bb7b8;
        *(void**)((char*)p + 0xc) = arg1;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
