// roc 2010-06 007bd3c0  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd3c0
//
// 007bd3c0  56                   push esi
// 007bd3c1  8b742408             mov esi, dword ptr [esp + 8]
// 007bd3c5  56                   push esi
// 007bd3c6  83c130               add ecx, 0x30
// 007bd3c9  e8e2feffff           call 0x7bd2b0
// 007bd3ce  8bc6                 mov eax, esi
// 007bd3d0  5e                   pop esi
// 007bd3d1  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX000035@@QAEHH@Z)

namespace ns_ROCX000035 {
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
