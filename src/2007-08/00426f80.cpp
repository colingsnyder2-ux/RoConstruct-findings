// from server: 36% by colin
struct S {
    char pad0[0xc];
    int field_c;
    char pad10[0x10];
    int field_20;
    char pad24[0x24];
    int field_48;
    char pad4c[0x4c];
    int field_94;
    char pad98[0x98];
    int field_12c;
    char pad130[0x130];
    int field_260;
    char pad264[0x264];
    int field_394;
    char pad398[0x398];
    int field_4c8;
    char pad4cc[0x4cc];
    int field_5fc;
    char pad600[0x600];
    int field_730;
    char pad734[0x734];
    int field_864;
    char pad868[0x868];
    int field_998;
    char pad99c[0x99c];
    int field_acc;
    char padad0[0xad0];
    int field_c00;
    char padc04[0xc04];
    int field_d34;

    S();
};

extern "C" void __stdcall sub_4269d0();
extern "C" int __stdcall sub_425aa0();

S::S()
{
    sub_4269d0();
    field_c = 0;
    *(int*)((char*)this + 0x00) = 0x789bbc;
    *(int*)((char*)this + 0x04) = 0x789bb4;
    *(int*)((char*)this + 0x10) = 0x789bac;
    *(int*)((char*)this + 0x14) = 0x789b9c;
    *(int*)((char*)this + 0x2c) = 0x789b8c;
    *(int*)((char*)this + 0x44) = 0x789b7c;
    *(int*)((char*)this + 0x5c) = 0x789b6c;
    *(int*)((char*)this + 0x74) = 0x789b5c;
    *(int*)((char*)this + 0x8c) = 0x789b4c;
    field_c = sub_425aa0();
}
