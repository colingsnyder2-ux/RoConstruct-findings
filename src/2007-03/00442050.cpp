// from server: 100% by tester
// roc 2007-03 00442050  unit: seg_00440000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442050
//
// 00442050  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00442053  0faf442404           imul eax, dword ptr [esp + 4]
// 00442058  99                   cdq 
// 00442059  83e207               and edx, 7
// 0044205c  03c2                 add eax, edx
// 0044205e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00442061  0faf542408           imul edx, dword ptr [esp + 8]
// 00442066  c1f803               sar eax, 3
// 00442069  03c2                 add eax, edx
// 0044206b  034108               add eax, dword ptr [ecx + 8]
// 0044206e  c20800               ret 8

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
