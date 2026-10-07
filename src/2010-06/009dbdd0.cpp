// roc 2010-06 009dbdd0  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dbdd0
//
// 009dbdd0  b9d01fc000           mov ecx, 0xc01fd0
// 009dbdd5  e9a6e7a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dbdd0 { void m(); };
extern T_func_009dbdd0 G1_func_009dbdd0;
void func_009dbdd0()
{
    G1_func_009dbdd0.m();
}
