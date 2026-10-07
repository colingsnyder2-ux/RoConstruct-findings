// roc 2008-06 007feeb0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007feeb0
//
// 007feeb0  b9b8989700           mov ecx, 0x9798b8
// 007feeb5  e906bdc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007feeb0 { void m(); };
extern T_func_007feeb0 G1_func_007feeb0;
void func_007feeb0()
{
    G1_func_007feeb0.m();
}
