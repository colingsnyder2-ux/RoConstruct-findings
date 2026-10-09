// roc 2008-06 006b50d0  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b50d0
//
// 006b50d0  83792000             cmp dword ptr [ecx + 0x20], 0
// 006b50d4  7412                 je 0x6b50e8
// 006b50d6  e8bd6e1000           call 0x7bbf98
// 006b50db  a900204000           test eax, 0x402000
// 006b50e0  7406                 je 0x6b50e8
// 006b50e2  b801000000           mov eax, 1
// 006b50e7  c3                   ret 
// 006b50e8  33c0                 xor eax, eax
// 006b50ea  c3                   ret 
// copied from an identical function in another client (function ?CanFocus@CXTPReportControl@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct CXTPReportControl
{
    char pad[0x20];
    void* field_20;
    int CanFocus();
};

extern "C" int __stdcall sub_00738322();

int CXTPReportControl::CanFocus()
{
    if (field_20 != 0)
    {
        if ((sub_00738322() & 0x402000) != 0)
            return 1;
    }
    return 0;
}
}
