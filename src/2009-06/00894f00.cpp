// roc 2009-06 00894f00  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894f00
//
// 00894f00  b9b0c9a300           mov ecx, 0xa3c9b0
// 00894f05  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00894f00 { void m(); };
extern T_func_00894f00 G1_func_00894f00;
void func_00894f00()
{
    G1_func_00894f00.m();
}
