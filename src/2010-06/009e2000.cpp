// roc 2010-06 009e2000  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2000
//
// 009e2000  b91c88c100           mov ecx, 0xc1881c
// 009e2005  e9966fa8ff           jmp 0x468fa0
// auto-matched from its assembly shape

struct T_func_009e2000 { void m(); };
extern T_func_009e2000 G1_func_009e2000;
void func_009e2000()
{
    G1_func_009e2000.m();
}
