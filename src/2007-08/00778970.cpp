// roc 2007-08 00778970  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778970
//
// 00778970  b918eb8b00           mov ecx, 0x8beb18
// 00778975  e996ecc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00778970 { void m(); };
extern T_func_00778970 G1_func_00778970;
void func_00778970()
{
    G1_func_00778970.m();
}
