// from server: 86% by colin
struct VFlagStandService {
    char pad[0xe8];
    int field_e8;
    void construct();
};

extern "C" void __stdcall sub_726e80(int);
extern "C" void __stdcall sub_5402b0();

void VFlagStandService::construct() {
    *(int*)((char*)this + 0x00) = 0x7bdf1c;
    *(int*)((char*)this + 0x04) = 0x7bdf14;
    *(int*)((char*)this + 0x10) = 0x7bdf0c;
    *(int*)((char*)this + 0x14) = 0x7bdefc;
    *(int*)((char*)this + 0x2c) = 0x7bdeec;
    *(int*)((char*)this + 0x44) = 0x7bdedc;
    *(int*)((char*)this + 0x5c) = 0x7bdecc;
    *(int*)((char*)this + 0x74) = 0x7bdebc;
    *(int*)((char*)this + 0x8c) = 0x7bdeac;
    sub_726e80((int)((char*)this + 0xe8));
    *(int*)((char*)this + 0x00) = 0x7bde54;
    *(int*)((char*)this + 0x04) = 0x7bde4c;
    *(int*)((char*)this + 0x10) = 0x7bde44;
    *(int*)((char*)this + 0x14) = 0x7bde34;
    *(int*)((char*)this + 0x2c) = 0x7bde24;
    *(int*)((char*)this + 0x44) = 0x7bde14;
    *(int*)((char*)this + 0x5c) = 0x7bde04;
    *(int*)((char*)this + 0x74) = 0x7bddf4;
    *(int*)((char*)this + 0x8c) = 0x7bdde4;
    sub_5402b0();
}
