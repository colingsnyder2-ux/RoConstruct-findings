// roc 2009-06 007320a0  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007320a0
//
// 007320a0  56                   push esi
// 007320a1  8b742408             mov esi, dword ptr [esp + 8]
// 007320a5  56                   push esi
// 007320a6  83c130               add ecx, 0x30
// 007320a9  e8e2feffff           call 0x731f90
// 007320ae  8bc6                 mov eax, esi
// 007320b0  5e                   pop esi
// 007320b1  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX00002b@@QAEHH@Z)

namespace ns_ROCX00002b {
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
