// roc 2007-08 00779c80  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779c80
//
// 00779c80  b970208c00           mov ecx, 0x8c2070
// 00779c85  e9560adeff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_00779c80 { void m(); };
extern T_func_00779c80 G1_func_00779c80;
void func_00779c80()
{
    G1_func_00779c80.m();
}
