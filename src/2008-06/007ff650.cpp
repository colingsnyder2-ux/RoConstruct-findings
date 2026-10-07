// roc 2008-06 007ff650  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff650
//
// 007ff650  b988a29700           mov ecx, 0x97a288
// 007ff655  e9b63ddaff           jmp 0x5a3410
// auto-matched from its assembly shape

struct T_func_007ff650 { void m(); };
extern T_func_007ff650 G1_func_007ff650;
void func_007ff650()
{
    G1_func_007ff650.m();
}
