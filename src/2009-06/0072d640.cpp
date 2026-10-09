// roc 2009-06 0072d640  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d640
//
// 0072d640  83792000             cmp dword ptr [ecx + 0x20], 0
// 0072d644  7412                 je 0x72d658
// 0072d646  e897e81100           call 0x84bee2
// 0072d64b  a900204000           test eax, 0x402000
// 0072d650  7406                 je 0x72d658
// 0072d652  b801000000           mov eax, 1
// 0072d657  c3                   ret 
// 0072d658  33c0                 xor eax, eax
// 0072d65a  c3                   ret 
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
