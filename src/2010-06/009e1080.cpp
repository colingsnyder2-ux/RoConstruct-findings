// roc 2010-06 009e1080  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1080
//
// 009e1080  b98062c100           mov ecx, 0xc16280
// 009e1085  e956bdbcff           jmp 0x5acde0
// auto-matched from its assembly shape

struct T_func_009e1080 { void m(); };
extern T_func_009e1080 G1_func_009e1080;
void func_009e1080()
{
    G1_func_009e1080.m();
}
