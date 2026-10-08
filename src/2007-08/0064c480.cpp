// from server: 100% by colin
// roc 2007-08 0064c480  unit: CXTPImageManagerIcon  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064c480
//
// 0064c480  56                   push esi
// 0064c481  8b742408             mov esi, dword ptr [esp + 8]
// 0064c485  56                   push esi
// 0064c486  83c130               add ecx, 0x30
// 0064c489  e832eeffff           call 0x64b2c0
// 0064c48e  8bc6                 mov eax, esi
// 0064c490  5e                   pop esi
// 0064c491  c20400               ret 4

struct CXTPImageManagerIcon {
    char pad[0x30];
    int sub_64b2c0(int);
    int set(int);
};

int CXTPImageManagerIcon::set(int value) {
    ((CXTPImageManagerIcon*)((char*)this + 0x30))->sub_64b2c0(value);
    return value;
}
