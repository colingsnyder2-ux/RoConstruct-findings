// roc 2008-06 00801690  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801690
//
// 00801690  b978e09700           mov ecx, 0x97e078
// 00801695  e996e5ebff           jmp 0x6bfc30
// auto-matched from its assembly shape

struct T_func_00801690 { void m(); };
extern T_func_00801690 G1_func_00801690;
void func_00801690()
{
    G1_func_00801690.m();
}
