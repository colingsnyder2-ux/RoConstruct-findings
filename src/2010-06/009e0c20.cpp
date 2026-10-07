// roc 2010-06 009e0c20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c20
//
// 009e0c20  b990e7c000           mov ecx, 0xc0e790
// 009e0c25  e95699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c20 { void m(); };
extern T_func_009e0c20 G1_func_009e0c20;
void func_009e0c20()
{
    G1_func_009e0c20.m();
}
