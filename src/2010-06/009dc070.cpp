// roc 2010-06 009dc070  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc070
//
// 009dc070  b92031c000           mov ecx, 0xc03120
// 009dc075  e9068fb6ff           jmp 0x544f80
// auto-matched from its assembly shape

struct T_func_009dc070 { void m(); };
extern T_func_009dc070 G1_func_009dc070;
void func_009dc070()
{
    G1_func_009dc070.m();
}
