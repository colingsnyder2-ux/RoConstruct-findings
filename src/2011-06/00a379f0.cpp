// roc 2011-06 00a379f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a379f0
//
// 00a379f0  b9f00fcc00           mov ecx, 0xcc0ff0
// 00a379f5  e946619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a379f0 { void m(); };
extern T_func_00a379f0 G1_func_00a379f0;
void func_00a379f0()
{
    G1_func_00a379f0.m();
}
