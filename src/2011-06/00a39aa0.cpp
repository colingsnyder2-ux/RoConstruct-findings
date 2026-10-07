// roc 2011-06 00a39aa0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39aa0
//
// 00a39aa0  b9d0bacc00           mov ecx, 0xccbad0
// 00a39aa5  e9662aa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a39aa0 { void m(); };
extern T_func_00a39aa0 G1_func_00a39aa0;
void func_00a39aa0()
{
    G1_func_00a39aa0.m();
}
