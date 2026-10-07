// roc 2009-06 00867540  unit: seg_00860000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00867540
//
// 00867540  b978aba400           mov ecx, 0xa4ab78
// 00867545  e906c2c4ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00867540 { void m(); };
extern T_func_00867540 G1_func_00867540;
void func_00867540()
{
    G1_func_00867540.m();
}
