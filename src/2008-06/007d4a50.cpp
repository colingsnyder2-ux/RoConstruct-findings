// roc 2008-06 007d4a50  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d4a50
//
// 007d4a50  b938959700           mov ecx, 0x979538
// 007d4a55  e9f64ec3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d4a50 { void m(); };
extern T_func_007d4a50 G1_func_007d4a50;
void func_007d4a50()
{
    G1_func_007d4a50.m();
}
