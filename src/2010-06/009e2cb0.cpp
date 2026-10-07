// roc 2010-06 009e2cb0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2cb0
//
// 009e2cb0  b9689dc100           mov ecx, 0xc19d68
// 009e2cb5  e98618c2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2cb0 { void m(); };
extern T_func_009e2cb0 G1_func_009e2cb0;
void func_009e2cb0()
{
    G1_func_009e2cb0.m();
}
