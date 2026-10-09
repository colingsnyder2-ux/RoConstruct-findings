// roc 2011-06 0081ad50  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ad50
//
// 0081ad50  83792000             cmp dword ptr [ecx + 0x20], 0
// 0081ad54  7412                 je 0x81ad68
// 0081ad56  e8c3181b00           call 0x9cc61e
// 0081ad5b  a900204000           test eax, 0x402000
// 0081ad60  7406                 je 0x81ad68
// 0081ad62  b801000000           mov eax, 1
// 0081ad67  c3                   ret 
// 0081ad68  33c0                 xor eax, eax
// 0081ad6a  c3                   ret 
// copied from an identical function in another client (function ?CanFocus@CXTPReportControl@ns_ROCX000003@@QAEHXZ)

namespace ns_ROCX000003 {
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
