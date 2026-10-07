// roc 2008-06 007fbad0  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fbad0
//
// 007fbad0  b9b00c9700           mov ecx, 0x970cb0
// 007fbad5  e9067acaff           jmp 0x4a34e0
// auto-matched from its assembly shape

struct T_func_007fbad0 { void m(); };
extern T_func_007fbad0 G1_func_007fbad0;
void func_007fbad0()
{
    G1_func_007fbad0.m();
}
