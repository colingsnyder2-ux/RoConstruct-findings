// roc 2009-06 0085b320  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085b320
//
// 0085b320  b9a4eaa300           mov ecx, 0xa3eaa4
// 0085b325  e92684c5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085b320 { void m(); };
extern T_func_0085b320 G1_func_0085b320;
void func_0085b320()
{
    G1_func_0085b320.m();
}
