// from server: 100% by tester
// roc 2007-08 004426d0  unit: CPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004426d0
//
// 004426d0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004426d3  0faf442404           imul eax, dword ptr [esp + 4]
// 004426d8  99                   cdq 
// 004426d9  83e207               and edx, 7
// 004426dc  03c2                 add eax, edx
// 004426de  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004426e1  0faf542408           imul edx, dword ptr [esp + 8]
// 004426e6  c1f803               sar eax, 3
// 004426e9  03c2                 add eax, edx
// 004426eb  034108               add eax, dword ptr [ecx + 8]
// 004426ee  c20800               ret 8

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
