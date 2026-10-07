// roc 2011-06 00a37fe0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37fe0
//
// 00a37fe0  b97083cc00           mov ecx, 0xcc8370
// 00a37fe5  e936a6b8ff           jmp 0x5c2620
// auto-matched from its assembly shape

struct T_func_00a37fe0 { void m(); };
extern T_func_00a37fe0 G1_func_00a37fe0;
void func_00a37fe0()
{
    G1_func_00a37fe0.m();
}
