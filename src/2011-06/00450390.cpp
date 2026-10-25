// from server: 100% by tester
// roc 2011-06 00450390  unit: CSelectionPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450390
//
// 00450390  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00450393  0faf442404           imul eax, dword ptr [esp + 4]
// 00450398  99                   cdq 
// 00450399  83e207               and edx, 7
// 0045039c  03c2                 add eax, edx
// 0045039e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004503a1  0faf542408           imul edx, dword ptr [esp + 8]
// 004503a6  c1f803               sar eax, 3
// 004503a9  03c2                 add eax, edx
// 004503ab  034108               add eax, dword ptr [ecx + 8]
// 004503ae  c20800               ret 8

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
