// roc 2009-06 00893a10  unit: seg_00890000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893a10
//
// 00893a10  b9f096a300           mov ecx, 0xa396f0
// 00893a15  e9964ee2ff           jmp 0x6b88b0
// auto-matched from its assembly shape

struct T_func_00893a10 { void m(); };
extern T_func_00893a10 G1_func_00893a10;
void func_00893a10()
{
    G1_func_00893a10.m();
}
