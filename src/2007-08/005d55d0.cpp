// from server: 44% by colin
struct S {
    void* field0;
    void* f(int a, int b);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

void* S::f(int a, int b) {
    void* p = sub_62fef6(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x7bb894;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
