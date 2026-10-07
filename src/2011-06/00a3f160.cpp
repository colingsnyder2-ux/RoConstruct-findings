// roc 2011-06 00a3f160  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f160
//
// 00a3f160  b9e049cd00           mov ecx, 0xcd49e0
// 00a3f165  e9a6d3a6ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3f160 { void m(); };
extern T_func_00a3f160 G1_func_00a3f160;
void func_00a3f160()
{
    G1_func_00a3f160.m();
}
