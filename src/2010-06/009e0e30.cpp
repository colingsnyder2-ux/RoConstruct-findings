// roc 2010-06 009e0e30  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0e30
//
// 009e0e30  b990c6c000           mov ecx, 0xc0c690
// 009e0e35  e94697a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0e30 { void m(); };
extern T_func_009e0e30 G1_func_009e0e30;
void func_009e0e30()
{
    G1_func_009e0e30.m();
}
