// roc 2011-06 00a354a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a354a0
//
// 00a354a0  b908d6cb00           mov ecx, 0xcbd608
// 00a354a5  e96670a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a354a0 { void m(); };
extern T_func_00a354a0 G1_func_00a354a0;
void func_00a354a0()
{
    G1_func_00a354a0.m();
}
