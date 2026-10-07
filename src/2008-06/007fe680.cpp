// roc 2008-06 007fe680  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe680
//
// 007fe680  b980859700           mov ecx, 0x978580
// 007fe685  e936c5c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe680 { void m(); };
extern T_func_007fe680 G1_func_007fe680;
void func_007fe680()
{
    G1_func_007fe680.m();
}
