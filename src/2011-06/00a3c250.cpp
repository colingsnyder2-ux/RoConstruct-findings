// roc 2011-06 00a3c250  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c250
//
// 00a3c250  b9e4fdcc00           mov ecx, 0xccfde4
// 00a3c255  e9b602a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3c250 { void m(); };
extern T_func_00a3c250 G1_func_00a3c250;
void func_00a3c250()
{
    G1_func_00a3c250.m();
}
