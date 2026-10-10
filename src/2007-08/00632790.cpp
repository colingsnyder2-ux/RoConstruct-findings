// from server: 38% by colin
struct CXTPCommandBarKeyboardTip {
    unsigned char pad0[0x54];
    int field54;
    int field58;
    int field5c;
    int field60;
    int field64;
    int field68;
    int field6c;
    int field70;
};

extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_77DDAC();
extern "C" void __stdcall sub_77DD6C();
extern "C" void __stdcall sub_77D558();

CXTPCommandBarKeyboardTip* __fastcall CXTPCommandBarKeyboardTip_ctor(
    CXTPCommandBarKeyboardTip* self, void*, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    sub_6305DA();
    self->field54 = 0;
    *(int*)self = 0x7c4f94;
    sub_77DDAC();
    sub_77DDAC();
    self->field5c = a3;
    sub_77DD6C();
    self->field64 = a4;
    self->field6c = a5;
    self->field60 = a6;
    sub_77D558();
    self->field70 = a7;
    self->field68 = a8;
    return self;
}
