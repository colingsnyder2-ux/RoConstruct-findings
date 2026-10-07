// roc 2010-06 009e6c70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c70
//
// 009e6c70  b928ffc100           mov ecx, 0xc1ff28
// 009e6c75  e9f6f8baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c70 { void m(); };
extern T_func_009e6c70 G1_func_009e6c70;
void func_009e6c70()
{
    G1_func_009e6c70.m();
}
