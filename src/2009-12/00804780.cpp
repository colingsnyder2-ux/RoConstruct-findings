// roc 2009-12 00804780  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804780
//
// 00804780  83792000             cmp dword ptr [ecx + 0x20], 0
// 00804784  7412                 je 0x804798
// 00804786  e8ed1c1200           call 0x926478
// 0080478b  a900204000           test eax, 0x402000
// 00804790  7406                 je 0x804798
// 00804792  b801000000           mov eax, 1
// 00804797  c3                   ret 
// 00804798  33c0                 xor eax, eax
// 0080479a  c3                   ret 
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
