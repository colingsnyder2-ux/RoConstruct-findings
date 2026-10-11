// from server: 45% by atomic.potato
struct S {
    char pad0[0xc];
    char field_c[0x24];
    int field_30;
    char field_34;
    char pad35[8];
    char field_3d;
    char pad3e[2];
    int field_40;
    int field_44;
    char pad48[0xc];
    int field_54;
    int field_58;
    char field_5c[4];
    int init(int);
};

extern "C" void __stdcall sub_5af370();
extern "C" void __stdcall sub_8a07d4();
extern "C" void __stdcall sub_89e464();

int S::init(int arg) {
    sub_5af370();
    field_30 = 0;
    field_34 = 0;
    field_3d = 0;
    field_40 = 0;
    field_44 = 0;
    field_54 = 0;
    field_58 = 0;
    *(void**)((char*)this + 0) = (void*)0x8d3ed4;
    sub_8a07d4();
    sub_89e464();
    return (int)this;
}
