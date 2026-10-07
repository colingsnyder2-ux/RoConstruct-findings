// roc 2010-06 009e2370  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2370
//
// 009e2370  b97090c100           mov ecx, 0xc19070
// 009e2375  e9d6eed0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e2370 { void m(); };
extern T_func_009e2370 G1_func_009e2370;
void func_009e2370()
{
    G1_func_009e2370.m();
}
