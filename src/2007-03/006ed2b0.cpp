// roc 2007-03 006ed2b0  unit: seg_006e0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ed2b0
//
// 006ed2b0  56                   push esi
// 006ed2b1  8bf1                 mov esi, ecx
// 006ed2b3  837e6800             cmp dword ptr [esi + 0x68], 0
// 006ed2b7  7411                 je 0x6ed2ca
// 006ed2b9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ed2bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ed2c1  50                   push eax
// 006ed2c2  51                   push ecx
// 006ed2c3  8bce                 mov ecx, esi
// 006ed2c5  e8e6fdffff           call 0x6ed0b0
// 006ed2ca  8bce                 mov ecx, esi
// 006ed2cc  e80114f3ff           call 0x61e6d2
// 006ed2d1  5e                   pop esi
// 006ed2d2  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@CXTColorHex_PAUHEXCOLOR_CELL_CList@ns_ROCX0000b7@@QAEXHHH@Z)

namespace ns_ROCX0000b7 {
struct CXTColorHex_PAUHEXCOLOR_CELL_CList {
    char pad0[0x68];
    int m_flag;
    void sub_709f50(int, int);
    void sub_63023e();
    void f(int, int, int);
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int a1, int a2, int a3)
{
    if (m_flag != 0) {
        sub_709f50(a2, a3);
    }
    sub_63023e();
}
}
