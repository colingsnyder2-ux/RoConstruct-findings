// roc 2010-06 009e0d40  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0d40
//
// 009e0d40  b990d5c000           mov ecx, 0xc0d590
// 009e0d45  e93698a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0d40 { void m(); };
extern T_func_009e0d40 G1_func_009e0d40;
void func_009e0d40()
{
    G1_func_009e0d40.m();
}
