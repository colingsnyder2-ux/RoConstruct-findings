// roc 2010-06 009e1000  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1000
//
// 009e1000  b9006ac100           mov ecx, 0xc16a00
// 009e1005  e946d7bcff           jmp 0x5ae750
// auto-matched from its assembly shape

struct T_func_009e1000 { void m(); };
extern T_func_009e1000 G1_func_009e1000;
void func_009e1000()
{
    G1_func_009e1000.m();
}
