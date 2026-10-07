// roc 2010-06 009e2620  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2620
//
// 009e2620  b9c894c100           mov ecx, 0xc194c8
// 009e2625  e9161fc2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2620 { void m(); };
extern T_func_009e2620 G1_func_009e2620;
void func_009e2620()
{
    G1_func_009e2620.m();
}
