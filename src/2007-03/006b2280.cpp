// roc 2007-03 006b2280  unit: seg_006b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b2280
//
// 006b2280  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 006b2286  85c0                 test eax, eax
// 006b2288  740c                 je 0x6b2296
// 006b228a  83782000             cmp dword ptr [eax + 0x20], 0
// 006b228e  7406                 je 0x6b2296
// 006b2290  b801000000           mov eax, 1
// 006b2295  c3                   ret 
// 006b2296  33c0                 xor eax, eax
// 006b2298  c3                   ret 
// copied from an identical function in another client (function ?IsValid@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct CXTPCustomizeSheet_CCustomizeEdit
{
    char pad[0x168];
    int* field_0x168;
    int IsValid();
};

int CXTPCustomizeSheet_CCustomizeEdit::IsValid()
{
    int* p = field_0x168;
    if (p != 0 && p[8] != 0)
        return 1;
    return 0;
}
}
