// roc 2009-06 008971e0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008971e0
//
// 008971e0  b9c034a400           mov ecx, 0xa434c0
// 008971e5  e9b636d3ff           jmp 0x5ca8a0
// auto-matched from its assembly shape

struct T_func_008971e0 { void m(); };
extern T_func_008971e0 G1_func_008971e0;
void func_008971e0()
{
    G1_func_008971e0.m();
}
