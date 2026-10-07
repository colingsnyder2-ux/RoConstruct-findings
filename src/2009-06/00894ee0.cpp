// roc 2009-06 00894ee0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894ee0
//
// 00894ee0  b990c9a300           mov ecx, 0xa3c990
// 00894ee5  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00894ee0 { void m(); };
extern T_func_00894ee0 G1_func_00894ee0;
void func_00894ee0()
{
    G1_func_00894ee0.m();
}
