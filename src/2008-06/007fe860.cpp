// roc 2008-06 007fe860  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe860
//
// 007fe860  b978919700           mov ecx, 0x979178
// 007fe865  e956c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe860 { void m(); };
extern T_func_007fe860 G1_func_007fe860;
void func_007fe860()
{
    G1_func_007fe860.m();
}
