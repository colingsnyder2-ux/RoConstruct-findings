// roc 2011-06 00a2ea70  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea70
//
// 00a2ea70  b9455dcd00           mov ecx, 0xcd5d45
// 00a2ea75  e9a6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea70 { void m(); };
extern T_func_00a2ea70 G1_func_00a2ea70;
void func_00a2ea70()
{
    G1_func_00a2ea70.m();
}
