// roc 2010-06 009de0e0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de0e0
//
// 009de0e0  b908a1c000           mov ecx, 0xc0a108
// 009de0e5  e9b600b7ff           jmp 0x54e1a0
// auto-matched from its assembly shape

struct T_func_009de0e0 { void m(); };
extern T_func_009de0e0 G1_func_009de0e0;
void func_009de0e0()
{
    G1_func_009de0e0.m();
}
