// roc 2009-06 0085aa60  unit: seg_00850000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0085aa60
//
// 0085aa60  b9a8dda300           mov ecx, 0xa3dda8
// 0085aa65  e9e68cc5ff           jmp 0x4b3750
// auto-matched from its assembly shape

struct T_func_0085aa60 { void m(); };
extern T_func_0085aa60 G1_func_0085aa60;
void func_0085aa60()
{
    G1_func_0085aa60.m();
}
