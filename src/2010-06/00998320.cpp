// roc 2010-06 00998320  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00998320
//
// 00998320  b99896c100           mov ecx, 0xc19698
// 00998325  e996aeb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00998320 { void m(); };
extern T_func_00998320 G1_func_00998320;
void func_00998320()
{
    G1_func_00998320.m();
}
