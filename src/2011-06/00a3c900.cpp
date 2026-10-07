// roc 2011-06 00a3c900  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c900
//
// 00a3c900  b9180ccd00           mov ecx, 0xcd0c18
// 00a3c905  e9e614beff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a3c900 { void m(); };
extern T_func_00a3c900 G1_func_00a3c900;
void func_00a3c900()
{
    G1_func_00a3c900.m();
}
