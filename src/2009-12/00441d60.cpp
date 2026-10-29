// roc 2009-12 00441d60  unit: CSelectionPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00441d60
//
// 00441d60  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00441d63  0faf442404           imul eax, dword ptr [esp + 4]
// 00441d68  99                   cdq 
// 00441d69  83e207               and edx, 7
// 00441d6c  03c2                 add eax, edx
// 00441d6e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00441d71  0faf542408           imul edx, dword ptr [esp + 8]
// 00441d76  c1f803               sar eax, 3
// 00441d79  03c2                 add eax, edx
// 00441d7b  034108               add eax, dword ptr [ecx + 8]
// 00441d7e  c20800               ret 8
// copied from an identical function in another client (function ?f@CSelectionPropGrid@ns_ROCX000008@@QAEHHH@Z)

namespace ns_ROCX000008 {
// from server: 100% by atomic.potato
struct CSelectionPropGrid
{
    int f(int, int);
    int value0;
    int value4;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;
};

int CSelectionPropGrid::f(int a, int b)
{
    return ((value18 * a) / 8) + (value14 * b) + value8;
}
}
