// roc 2009-06 0089d5f0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d5f0
//
// 0089d5f0  b9302ba500           mov ecx, 0xa52b30
// 0089d5f5  e976b5f6ff           jmp 0x808b70
// auto-matched from its assembly shape

struct T_func_0089d5f0 { void m(); };
extern T_func_0089d5f0 G1_func_0089d5f0;
void func_0089d5f0()
{
    G1_func_0089d5f0.m();
}
