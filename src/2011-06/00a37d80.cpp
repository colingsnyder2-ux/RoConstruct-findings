// roc 2011-06 00a37d80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37d80
//
// 00a37d80  b9609ccc00           mov ecx, 0xcc9c60
// 00a37d85  e9e60cb9ff           jmp 0x5c8a70
// auto-matched from its assembly shape

struct T_func_00a37d80 { void m(); };
extern T_func_00a37d80 G1_func_00a37d80;
void func_00a37d80()
{
    G1_func_00a37d80.m();
}
