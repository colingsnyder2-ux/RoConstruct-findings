// roc 2009-06 0085aa80  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085aa80
//
// 0085aa80  b998dca300           mov ecx, 0xa3dc98
// 0085aa85  e9c68cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085aa80 { void m(); };
extern T_func_0085aa80 G1_func_0085aa80;
void func_0085aa80()
{
    G1_func_0085aa80.m();
}
