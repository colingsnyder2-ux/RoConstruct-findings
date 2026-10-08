// roc 2007-08 0077a3b0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a3b0
//
// 0077a3b0  b9682c8c00           mov ecx, 0x8c2c68
// 0077a3b5  e9b6cddfff           jmp 0x577170
// auto-matched from its assembly shape

struct T_func_0077a3b0 { void m(); };
extern T_func_0077a3b0 G1_func_0077a3b0;
void func_0077a3b0()
{
    G1_func_0077a3b0.m();
}
