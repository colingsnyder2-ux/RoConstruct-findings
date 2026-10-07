// roc 2010-06 009e0c30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c30
//
// 009e0c30  b990e6c000           mov ecx, 0xc0e690
// 009e0c35  e94699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c30 { void m(); };
extern T_func_009e0c30 G1_func_009e0c30;
void func_009e0c30()
{
    G1_func_009e0c30.m();
}
