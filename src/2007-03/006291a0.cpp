// roc 2007-03 006291a0  unit: seg_00620000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006291a0
//
// 006291a0  56                   push esi
// 006291a1  8b742408             mov esi, dword ptr [esp + 8]
// 006291a5  56                   push esi
// 006291a6  83c130               add ecx, 0x30
// 006291a9  e832eeffff           call 0x627fe0
// 006291ae  8bc6                 mov eax, esi
// 006291b0  5e                   pop esi
// 006291b1  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX000005@@QAEHH@Z)

namespace ns_ROCX000005 {
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
