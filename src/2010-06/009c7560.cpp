// roc 2010-06 009c7560  unit: seg_009c0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7560
//
// 009c7560  b9745dc000           mov ecx, 0xc05d74
// 009c7565  e97640d4ff           jmp 0x70b5e0
// auto-matched from its assembly shape

struct T_func_009c7560 { void m(); };
extern T_func_009c7560 G1_func_009c7560;
void func_009c7560()
{
    G1_func_009c7560.m();
}
