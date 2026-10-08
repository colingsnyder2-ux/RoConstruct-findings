// from server: 100% by colin
// roc 2007-08 004c4ca0  unit: RakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4ca0
//
// 004c4ca0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004c4ca4  7609                 jbe 0x4c4caf
// 004c4ca6  8b01                 mov eax, dword ptr [ecx]
// 004c4ca8  50                   push eax
// 004c4ca9  e8b4af1600           call 0x62fc62
// 004c4cae  59                   pop ecx
// 004c4caf  c3                   ret 

struct RakPeer {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    void method();
};

extern "C" void __cdecl sub_62FC62(unsigned int);

void RakPeer::method() {
    if (field_c > 0) {
        sub_62FC62(field_0);
    }
}
