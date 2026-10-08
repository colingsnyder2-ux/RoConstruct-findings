// roc 2007-08 007776a0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007776a0
//
// 007776a0  b930b78b00           mov ecx, 0x8bb730
// 007776a5  e916f6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007776a0 { void m(); };
extern T_func_007776a0 G1_func_007776a0;
void func_007776a0()
{
    G1_func_007776a0.m();
}
