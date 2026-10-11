// from server: 50% by atomic.potato
struct VServerBoundFuncDesc {
    void* vfptr;
    char pad_04[0x10];
    void* field_14;
    char pad_18[0x20];
    int field_38;
    int field_3c;
    void* ctor_helper(int a, int b, int c, int d);
};

extern "C" int __cdecl sub_4cfdd0(int a, int b);
extern "C" int __cdecl sub_5e59f0();
extern "C" void __cdecl sub_6773a0();

extern int dword_A4A670;

void* VServerBoundFuncDesc::ctor_helper(int a, int b, int c, int d) {
    int r = sub_4cfdd0(c, d);
    sub_6773a0();
    this->field_38 = a;
    this->field_3c = b;
    dword_A4A670++;
    this->field_14 = (void*)sub_5e59f0();
    return this;
}
