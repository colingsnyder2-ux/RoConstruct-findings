// roc 2007-08 0077a040  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a040
//
// 0077a040  b978268c00           mov ecx, 0x8c2678
// 0077a045  e976ccc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a040 { void m(); };
extern T_func_0077a040 G1_func_0077a040;
void func_0077a040()
{
    G1_func_0077a040.m();
}
