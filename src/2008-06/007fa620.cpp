// roc 2008-06 007fa620  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fa620
//
// 007fa620  b900cf9600           mov ecx, 0x96cf00
// 007fa625  e99605c1ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fa620 { void m(); };
extern T_func_007fa620 G1_func_007fa620;
void func_007fa620()
{
    G1_func_007fa620.m();
}
