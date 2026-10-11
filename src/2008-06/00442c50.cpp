// from server: 100% by tester
// roc 2008-06 00442c50  unit: CPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442c50
//
// 00442c50  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00442c53  0faf442404           imul eax, dword ptr [esp + 4]
// 00442c58  99                   cdq 
// 00442c59  83e207               and edx, 7
// 00442c5c  03c2                 add eax, edx
// 00442c5e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00442c61  0faf542408           imul edx, dword ptr [esp + 8]
// 00442c66  c1f803               sar eax, 3
// 00442c69  03c2                 add eax, edx
// 00442c6b  034108               add eax, dword ptr [ecx + 8]
// 00442c6e  c20800               ret 8

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
