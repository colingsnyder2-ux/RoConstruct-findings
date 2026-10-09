// roc 2009-12 00809220  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809220
//
// 00809220  56                   push esi
// 00809221  8b742408             mov esi, dword ptr [esp + 8]
// 00809225  56                   push esi
// 00809226  83c130               add ecx, 0x30
// 00809229  e8e2feffff           call 0x809110
// 0080922e  8bc6                 mov eax, esi
// 00809230  5e                   pop esi
// 00809231  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX000039@@QAEHH@Z)

namespace ns_ROCX000039 {
struct CXTPImageManagerIcon {
    char pad[0x30];
    int sub_64b2c0(int);
    int set(int);
};

int CXTPImageManagerIcon::set(int value) {
    ((CXTPImageManagerIcon*)((char*)this + 0x30))->sub_64b2c0(value);
    return value;
}
}
