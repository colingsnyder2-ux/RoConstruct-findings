// roc 2008-06 00800870  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800870
//
// 00800870  b9d8c39700           mov ecx, 0x97c3d8
// 00800875  e946a3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_00800870 { void m(); };
extern T_func_00800870 G1_func_00800870;
void func_00800870()
{
    G1_func_00800870.m();
}
