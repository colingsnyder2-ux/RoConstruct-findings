// roc 2007-08 0077cbf0  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cbf0
//
// 0077cbf0  b908888c00           mov ecx, 0x8c8808
// 0077cbf5  e9a03aebff           jmp 0x63069a
// auto-matched from its assembly shape

struct T_func_0077cbf0 { void m(); };
extern T_func_0077cbf0 G1_func_0077cbf0;
void func_0077cbf0()
{
    G1_func_0077cbf0.m();
}
