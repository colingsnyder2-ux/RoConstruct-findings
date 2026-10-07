// roc 2009-06 00896620  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896620
//
// 00896620  b99815a400           mov ecx, 0xa41598
// 00896625  e98688c8ff           jmp 0x51eeb0
// auto-matched from its assembly shape

struct T_func_00896620 { void m(); };
extern T_func_00896620 G1_func_00896620;
void func_00896620()
{
    G1_func_00896620.m();
}
