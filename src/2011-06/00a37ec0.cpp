// roc 2011-06 00a37ec0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ec0
//
// 00a37ec0  b9408fcc00           mov ecx, 0xcc8f40
// 00a37ec5  e9f6d2b8ff           jmp 0x5c51c0
// auto-matched from its assembly shape

struct T_func_00a37ec0 { void m(); };
extern T_func_00a37ec0 G1_func_00a37ec0;
void func_00a37ec0()
{
    G1_func_00a37ec0.m();
}
