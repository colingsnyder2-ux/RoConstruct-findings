// roc 2009-06 00859a20  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00859a20
//
// 00859a20  b9c8d8a300           mov ecx, 0xa3d8c8
// 00859a25  e9269dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00859a20 { void m(); };
extern T_func_00859a20 G1_func_00859a20;
void func_00859a20()
{
    G1_func_00859a20.m();
}
