// roc 2010-06 009e0bb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0bb0
//
// 009e0bb0  b990eec000           mov ecx, 0xc0ee90
// 009e0bb5  e9c699a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009e0bb0 { void m(); };
extern T_func_009e0bb0 G1_func_009e0bb0;
void func_009e0bb0()
{
    G1_func_009e0bb0.m();
}
