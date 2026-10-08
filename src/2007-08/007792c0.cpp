// roc 2007-08 007792c0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007792c0
//
// 007792c0  b9d00b8c00           mov ecx, 0x8c0bd0
// 007792c5  e9c66ed8ff           jmp 0x500190
// auto-matched from its assembly shape

struct T_func_007792c0 { void m(); };
extern T_func_007792c0 G1_func_007792c0;
void func_007792c0()
{
    G1_func_007792c0.m();
}
