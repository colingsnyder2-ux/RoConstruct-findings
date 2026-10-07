// roc 2009-06 008599c0  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008599c0
//
// 008599c0  b908dba300           mov ecx, 0xa3db08
// 008599c5  e9869dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_008599c0 { void m(); };
extern T_func_008599c0 G1_func_008599c0;
void func_008599c0()
{
    G1_func_008599c0.m();
}
