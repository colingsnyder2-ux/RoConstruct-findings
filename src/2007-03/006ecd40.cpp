// roc 2007-03 006ecd40  unit: seg_006e0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ecd40
//
// 006ecd40  c7416800000000       mov dword ptr [ecx + 0x68], 0
// 006ecd47  e88619f3ff           call 0x61e6d2
// 006ecd4c  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_00709ba0@CXTColorHex@ns_ROCX0000b2@@QAEXHHH@Z)

namespace ns_ROCX0000b2 {
struct CXTColorHex
{
    char pad[0x68];
    int field_68;
    void sub_00709ba0(int, int, int);
};

extern void G1_func_0063023e();

void CXTColorHex::sub_00709ba0(int a, int b, int c)
{
    field_68 = 0;
    G1_func_0063023e();
}
}
