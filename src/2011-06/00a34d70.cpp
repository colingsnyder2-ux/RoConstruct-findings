// roc 2011-06 00a34d70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34d70
//
// 00a34d70  b9d8b6cb00           mov ecx, 0xcbb6d8
// 00a34d75  e99677a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a34d70 { void m(); };
extern T_func_00a34d70 G1_func_00a34d70;
void func_00a34d70()
{
    G1_func_00a34d70.m();
}
