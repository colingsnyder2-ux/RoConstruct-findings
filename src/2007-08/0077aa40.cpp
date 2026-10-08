// roc 2007-08 0077aa40  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa40
//
// 0077aa40  b9c83a8c00           mov ecx, 0x8c3ac8
// 0077aa45  e976c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa40 { void m(); };
extern T_func_0077aa40 G1_func_0077aa40;
void func_0077aa40()
{
    G1_func_0077aa40.m();
}
