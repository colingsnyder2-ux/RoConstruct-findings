// roc 2011-06 00a39830  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39830
//
// 00a39830  b938adcc00           mov ecx, 0xccad38
// 00a39835  e9b645beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a39830 { void m(); };
extern T_func_00a39830 G1_func_00a39830;
void func_00a39830()
{
    G1_func_00a39830.m();
}
