// from server: 29% by colin
struct S {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    S* ctor(int* src);
};

S* S::ctor(int* src) {
    this->vtable = (void*)0x7c07ec;
    this->field4 = 0;
    this->field8 = 0;
    this->fieldC = 0;
    if (*src != 0) {
        this->fieldC = src[2];
        this->field4 = src[0];
        int (*fn)(int, int) = (int (*)(int, int))src[0];
        this->field8 = fn(src[1], 0);
    }
    return this;
}
