// from server: 52% by colin
struct S {
    void* field0;
    S* construct(void* a, void* b);
};

extern "C" void* __cdecl sub_98211A(unsigned int size);

S* S::construct(void* a, void* b)
{
    field0 = 0;
    void* p = sub_98211A(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xb4726c;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
    return this;
}
