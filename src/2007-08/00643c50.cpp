// from server: 100% by colin
// roc 2007-08 00643c50  unit: CXTPReportControl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643c50
//
// 00643c50  83792000             cmp dword ptr [ecx + 0x20], 0
// 00643c54  7412                 je 0x643c68
// 00643c56  e8c7460f00           call 0x738322
// 00643c5b  a900204000           test eax, 0x402000
// 00643c60  7406                 je 0x643c68
// 00643c62  b801000000           mov eax, 1
// 00643c67  c3                   ret 
// 00643c68  33c0                 xor eax, eax
// 00643c6a  c3                   ret 

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
