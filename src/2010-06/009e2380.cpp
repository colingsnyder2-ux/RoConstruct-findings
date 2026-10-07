// roc 2010-06 009e2380  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2380
//
// 009e2380  b9f88bc100           mov ecx, 0xc18bf8
// 009e2385  e9e641bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2380 { void m(); };
extern T_func_009e2380 G1_func_009e2380;
void func_009e2380()
{
    G1_func_009e2380.m();
}
