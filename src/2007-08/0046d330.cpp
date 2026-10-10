// from server: 30% by colin
struct S {
    char pad0[0x0c];
    void* field0c;
    char pad10[0x18];
    void* field28;
    void* field2c;
    void* field30;
    char pad34[0x20];
    void* field54;
    void dtor();
};

extern "C" void __stdcall sub_4ff810(void*);
extern "C" void __stdcall sub_77e6ac(void*);

void S::dtor() {
    sub_77e6ac(&field54);
    sub_4ff810(field28);
    field28 = 0;
    field2c = 0;
    field30 = 0;
    sub_77e6ac(&field0c);
}
