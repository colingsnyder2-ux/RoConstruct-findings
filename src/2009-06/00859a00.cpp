// roc 2009-06 00859a00  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00859a00
//
// 00859a00  b9e0d9a300           mov ecx, 0xa3d9e0
// 00859a05  e9469dc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_00859a00 { void m(); };
extern T_func_00859a00 G1_func_00859a00;
void func_00859a00()
{
    G1_func_00859a00.m();
}
