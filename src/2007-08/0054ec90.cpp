// from server: 36% by colin
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_40CC20(void*, void*, void*);

struct S {
    void* field0;
    void* field4;
    void* method(void* a, void* b);
};

void* sub_54B9F0(void* self, void* a, void* b);
void sub_54C8A0(void* self, void* p);

void* S::method(void* a, void* b) {
    void* mem = sub_62FEF6(0x28);
    void* result = 0;
    if (mem != 0) {
        result = sub_54B9F0(mem, a, b);
    }
    this->field0 = result;
    sub_54C8A0(&this->field4, result);
    sub_40CC20(&this->field4, result, result);
    return this;
}
