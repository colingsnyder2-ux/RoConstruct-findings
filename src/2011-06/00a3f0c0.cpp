// roc 2011-06 00a3f0c0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f0c0
//
// 00a3f0c0  b9f847cd00           mov ecx, 0xcd47f8
// 00a3f0c5  e946d4a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f0c0 { void m(); };
extern T_func_00a3f0c0 G1_func_00a3f0c0;
void func_00a3f0c0()
{
    G1_func_00a3f0c0.m();
}
