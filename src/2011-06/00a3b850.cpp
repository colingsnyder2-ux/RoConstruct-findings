// roc 2011-06 00a3b850  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b850
//
// 00a3b850  b9f8eacc00           mov ecx, 0xcceaf8
// 00a3b855  e9b60ca7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3b850 { void m(); };
extern T_func_00a3b850 G1_func_00a3b850;
void func_00a3b850()
{
    G1_func_00a3b850.m();
}
