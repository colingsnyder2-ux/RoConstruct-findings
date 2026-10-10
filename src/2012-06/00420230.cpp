// from server: 46% by Intel
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct CAudioStream {
    DWORD field_0x14;
    DWORD field_0x18;
    DWORD field_0x1c;
    DWORD field_0x20;
    DWORD field_0x24;
    DWORD field_0x28;
    DWORD field_0x2c;
    DWORD field_0x30;
    DWORD field_0x34;
    DWORD field_0x38;
    DWORD field_0x3c;
    DWORD field_0x40;
    DWORD field_0x44;
    DWORD field_0x48;
    DWORD field_0x4c;
    DWORD field_0x50;
    DWORD field_0x54;
    DWORD field_0x58;
    DWORD field_0x5c;
    DWORD field_0x60;
    DWORD field_0x64;
    DWORD field_0x68;
    DWORD field_0x6c;
    DWORD field_0x70;
    DWORD field_0x74;
    DWORD field_0x78;
    DWORD field_0x7c;
    DWORD field_0x80;
    DWORD field_0x84;
    DWORD field_0x88;
    DWORD field_0x8c;
    DWORD field_0x90;
    DWORD field_0x94;
    DWORD field_0x98;
    DWORD field_0x9c;
    DWORD field_0xa0;
    DWORD field_0xa4;
    DWORD field_0xa8;
    DWORD field_0xac;
    DWORD field_0xb0;
    DWORD field_0xb4;
    DWORD field_0xb8;
    DWORD field_0xbc;
    DWORD field_0xc0;
    DWORD field_0xc4;
    DWORD field_0xc8;
    DWORD field_0xcc;
    DWORD field_0xd0;
    DWORD field_0xd4;
    DWORD field_0xd8;
    DWORD field_0xdc;
    DWORD field_0xe0;
    DWORD field_0xe4;
    DWORD field_0xe8;
    DWORD field_0xec;
    DWORD field_0xf0;
    DWORD field_0xf4;
    DWORD field_0xf8;
    DWORD field_0xfc;
};

DWORD __stdcall get_field_0xd0(CAudioStream* this_ptr) {
    DWORD value = *(DWORD*)((char*)this_ptr + 0xd0);
    return value;
}

DWORD __stdcall get_vtable_entry_0(CAudioStream* this_ptr) {
    DWORD* obj = (DWORD*)((char*)this_ptr + 0xd0);
    return obj[0];
}
