// roc 2010-06 009e9080  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9080
//
// 009e9080  b9505bc200           mov ecx, 0xc25b50
// 009e9085  e94674e0ff           jmp 0x7f04d0
// auto-matched from its assembly shape

struct T_func_009e9080 { void m(); };
extern T_func_009e9080 G1_func_009e9080;
void func_009e9080()
{
    G1_func_009e9080.m();
}
