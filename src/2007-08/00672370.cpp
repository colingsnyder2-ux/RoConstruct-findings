// from server: 48% by colin
struct CXTPControlButtonColor {
    char pad[0x144];
    int field_144;
    char pad2[0x20];
    int field_168;
    void* Init();
};

extern "C" void __fastcall sub_6CA460(void*);
extern "C" void __fastcall sub_639DB0(void*);

void* CXTPControlButtonColor::Init() {
    sub_6CA460(this);
    if (field_144 != 1) {
        field_144 = 1;
        sub_639DB0(this);
    }
    field_168 = -1;
    return this;
}
