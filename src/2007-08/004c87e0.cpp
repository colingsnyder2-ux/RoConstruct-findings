// from server: 50% by colin
// roc 2007-08 004c87e0  unit: seg_004c0000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c87e0

extern "C" void __cdecl sub_62fc62(void*);
extern "C" void __cdecl sub_630af7(void*, int, unsigned int, void*);

struct S {
    void* field0;
    unsigned int field4;
    unsigned int field8;
    void method();
};

void sub_4c7ca0(S*);

void S::method() {
    if (this->field8 != 0) {
        if (this->field8 > 0x200) {
            if (this->field0 != 0) {
                void* p = this->field0;
                unsigned int n = *(unsigned int*)((char*)p - 4);
                sub_630af7(p, 8, n, (void*)0x40cc20);
                sub_62fc62((char*)p - 4);
            }
            this->field8 = 0;
            this->field0 = 0;
        }
        this->field4 = 0;
    }
    sub_4c7ca0(this);
}
