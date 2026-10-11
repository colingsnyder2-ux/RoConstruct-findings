// from server: 35% by colin
extern "C" void __stdcall sub_7BC4D2(int, int, int);
extern "C" void __stdcall sub_6A0E90();
extern "C" void __stdcall sub_6ED380();

struct S {
    char pad0[0x88];
    char field_88[0x5C];
    char pad_e4[0x54];
    int field_138;
    char field_13c[4];
    S(int);
};

S::S(int a) {
    sub_7BC4D2(0x239f, 0, 0x30);
    *(void**)((char*)this + 0) = (void*)0x8586ac;
    sub_6A0E90();
    *(void**)((char*)this + 0x88) = (void*)0x85852c;
    *(int*)((char*)this + 0x88 + 0x58) = 0;
    *(int*)((char*)this + 0x88 + 0x54) = 0;
    sub_6A0E90();
    *(void**)((char*)this + 0xe4) = (void*)0x8583c4;
    *(int*)((char*)this + 0x138) = a;
    sub_6ED380();
}
