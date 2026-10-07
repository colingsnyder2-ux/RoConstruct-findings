// roc 2010-06 009e0fd0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0fd0
//
// 009e0fd0  b9d06cc100           mov ecx, 0xc16cd0
// 009e0fd5  e956ddbcff           jmp 0x5aed30
// auto-matched from its assembly shape

struct T_func_009e0fd0 { void m(); };
extern T_func_009e0fd0 G1_func_009e0fd0;
void func_009e0fd0()
{
    G1_func_009e0fd0.m();
}
