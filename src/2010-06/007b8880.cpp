// roc 2010-06 007b8880  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8880
//
// 007b8880  83792000             cmp dword ptr [ecx + 0x20], 0
// 007b8884  7412                 je 0x7b8898
// 007b8886  e859451c00           call 0x97cde4
// 007b888b  a900204000           test eax, 0x402000
// 007b8890  7406                 je 0x7b8898
// 007b8892  b801000000           mov eax, 1
// 007b8897  c3                   ret 
// 007b8898  33c0                 xor eax, eax
// 007b889a  c3                   ret 
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
