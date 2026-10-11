// from server: 100% by tester
// roc 2009-06 0043d880  unit: CSelectionPropGrid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043d880
//
// 0043d880  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0043d883  0faf442404           imul eax, dword ptr [esp + 4]
// 0043d888  99                   cdq 
// 0043d889  83e207               and edx, 7
// 0043d88c  03c2                 add eax, edx
// 0043d88e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0043d891  0faf542408           imul edx, dword ptr [esp + 8]
// 0043d896  c1f803               sar eax, 3
// 0043d899  03c2                 add eax, edx
// 0043d89b  034108               add eax, dword ptr [ecx + 8]
// 0043d89e  c20800               ret 8

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
