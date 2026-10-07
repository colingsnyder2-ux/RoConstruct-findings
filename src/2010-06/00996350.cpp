// roc 2010-06 00996350  unit: seg_00990000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00996350
//
// 00996350  b9d889c100           mov ecx, 0xc189d8
// 00996355  e966ceb0ff           jmp 0x4a31c0
// auto-matched from its assembly shape

struct T_func_00996350 { void m(); };
extern T_func_00996350 G1_func_00996350;
void func_00996350()
{
    G1_func_00996350.m();
}
