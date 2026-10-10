// from server: 52% by colin
struct S {
    void* field_0;
    void* init(int value);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void* S::init(int value) {
    field_0 = 0;
    void* p = sub_62FEF6(0x10);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x7a7874;
        *(int*)((char*)p + 0xc) = value;
    } else {
        p = 0;
    }
    field_0 = p;
    return this;
}
