// roc 2008-06 007fada0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fada0
//
// 007fada0  b9c8d89600           mov ecx, 0x96d8c8
// 007fada5  e976bcc4ff           jmp 0x446a20
// auto-matched from its assembly shape

struct T_func_007fada0 { void m(); };
extern T_func_007fada0 G1_func_007fada0;
void func_007fada0()
{
    G1_func_007fada0.m();
}
