// roc 2011-06 00a3abc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3abc0
//
// 00a3abc0  b9b0d3cc00           mov ecx, 0xccd3b0
// 00a3abc5  e9f624a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3abc0 { void m(); };
extern T_func_00a3abc0 G1_func_00a3abc0;
void func_00a3abc0()
{
    G1_func_00a3abc0.m();
}
