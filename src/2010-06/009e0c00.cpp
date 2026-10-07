// roc 2010-06 009e0c00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0c00
//
// 009e0c00  b990e9c000           mov ecx, 0xc0e990
// 009e0c05  e97699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0c00 { void m(); };
extern T_func_009e0c00 G1_func_009e0c00;
void func_009e0c00()
{
    G1_func_009e0c00.m();
}
