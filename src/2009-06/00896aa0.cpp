// roc 2009-06 00896aa0  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896aa0
//
// 00896aa0  b9802aa400           mov ecx, 0xa42a80
// 00896aa5  e9e64fcdff           jmp 0x56ba90
// auto-matched from its assembly shape

struct T_func_00896aa0 { void m(); };
extern T_func_00896aa0 G1_func_00896aa0;
void func_00896aa0()
{
    G1_func_00896aa0.m();
}
