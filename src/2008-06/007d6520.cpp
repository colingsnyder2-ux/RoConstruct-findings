// roc 2008-06 007d6520  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6520
//
// 007d6520  b98ca89700           mov ecx, 0x97a88c
// 007d6525  e92634c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6520 { void m(); };
extern T_func_007d6520 G1_func_007d6520;
void func_007d6520()
{
    G1_func_007d6520.m();
}
