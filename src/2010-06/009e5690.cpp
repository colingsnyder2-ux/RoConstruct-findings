// roc 2010-06 009e5690  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5690
//
// 009e5690  b9a0e4c100           mov ecx, 0xc1e4a0
// 009e5695  e9d60ebbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5690 { void m(); };
extern T_func_009e5690 G1_func_009e5690;
void func_009e5690()
{
    G1_func_009e5690.m();
}
