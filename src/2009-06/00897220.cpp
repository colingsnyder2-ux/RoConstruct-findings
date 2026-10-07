// roc 2009-06 00897220  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897220
//
// 00897220  b90031a400           mov ecx, 0xa43100
// 00897225  e9f62fd3ff           jmp 0x5ca220
// auto-matched from its assembly shape

struct T_func_00897220 { void m(); };
extern T_func_00897220 G1_func_00897220;
void func_00897220()
{
    G1_func_00897220.m();
}
