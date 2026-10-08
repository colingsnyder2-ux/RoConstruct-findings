// roc 2007-08 0077a510  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a510
//
// 0077a510  b9082f8c00           mov ecx, 0x8c2f08
// 0077a515  e9062fe0ff           jmp 0x57d420
// auto-matched from its assembly shape

struct T_func_0077a510 { void m(); };
extern T_func_0077a510 G1_func_0077a510;
void func_0077a510()
{
    G1_func_0077a510.m();
}
