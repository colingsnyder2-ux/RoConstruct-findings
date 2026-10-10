// from server: 45% by colin
struct S {
    char pad[0xe8];
    void f();
};

extern "C" void __stdcall sub_77E6AC();
extern "C" void __stdcall sub_5402B0();

void S::f() {
    sub_77E6AC();
    *(int*)((char*)this + 0x00) = 0x7c0384;
    *(int*)((char*)this + 0x04) = 0x7c037c;
    *(int*)((char*)this + 0x10) = 0x7c0374;
    *(int*)((char*)this + 0x14) = 0x7c0364;
    *(int*)((char*)this + 0x2c) = 0x7c0354;
    *(int*)((char*)this + 0x44) = 0x7c0344;
    *(int*)((char*)this + 0x5c) = 0x7c0334;
    *(int*)((char*)this + 0x74) = 0x7c0324;
    *(int*)((char*)this + 0x8c) = 0x7c0314;
    sub_5402B0();
}
