// roc 2009-06 0089c970  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c970
//
// 0089c970  b900f4a400           mov ecx, 0xa4f400
// 0089c975  e9962ed3ff           jmp 0x5cf810
// auto-matched from its assembly shape

struct T_func_0089c970 { void m(); };
extern T_func_0089c970 G1_func_0089c970;
void func_0089c970()
{
    G1_func_0089c970.m();
}
