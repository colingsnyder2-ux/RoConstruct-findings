// roc 2009-06 00897840  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897840
//
// 00897840  b9f044a400           mov ecx, 0xa444f0
// 00897845  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00897840 { void m(); };
extern T_func_00897840 G1_func_00897840;
void func_00897840()
{
    G1_func_00897840.m();
}
