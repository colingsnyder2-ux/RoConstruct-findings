// roc 2007-08 0077aa90  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa90
//
// 0077aa90  b9f8378c00           mov ecx, 0x8c37f8
// 0077aa95  e926c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa90 { void m(); };
extern T_func_0077aa90 G1_func_0077aa90;
void func_0077aa90()
{
    G1_func_0077aa90.m();
}
