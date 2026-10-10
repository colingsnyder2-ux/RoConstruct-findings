// from server: 93% by tester
// roc 2008-06 0042d280  unit: seg_00420000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d280

extern "C" int __cdecl sub_56cbc0();
extern "C" void* __cdecl sub_6a0920(unsigned int);

struct Holder {
    int field0;
    void* field4;
    Holder* init(void* arg);
};

Holder* Holder::init(void* arg) {
    this->field0 = sub_56cbc0();
    void* p = sub_6a0920(8);
    if (p != 0) {
        *(int*)p = 0x8106cc;
        *(int*)((char*)p + 4) = *(int*)arg;
        this->field4 = p;
    } else {
        this->field4 = 0;
    }
    return this;
}
