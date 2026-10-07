// roc 2011-06 00a34f70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34f70
//
// 00a34f70  b9e8becb00           mov ecx, 0xcbbee8
// 00a34f75  e9768ebeff           jmp 0x61ddf0
// auto-matched from its assembly shape

struct T_func_00a34f70 { void m(); };
extern T_func_00a34f70 G1_func_00a34f70;
void func_00a34f70()
{
    G1_func_00a34f70.m();
}
