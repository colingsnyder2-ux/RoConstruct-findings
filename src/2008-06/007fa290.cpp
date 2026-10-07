// roc 2008-06 007fa290  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa290
//
// 007fa290  b930c59600           mov ecx, 0x96c530
// 007fa295  e92609c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa290 { void m(); };
extern T_func_007fa290 G1_func_007fa290;
void func_007fa290()
{
    G1_func_007fa290.m();
}
