// roc 2010-06 009dc130  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc130
//
// 009dc130  b9383cc000           mov ecx, 0xc03c38
// 009dc135  e9f62eabff           jmp 0x48f030
// auto-matched from its assembly shape

struct T_func_009dc130 { void m(); };
extern T_func_009dc130 G1_func_009dc130;
void func_009dc130()
{
    G1_func_009dc130.m();
}
