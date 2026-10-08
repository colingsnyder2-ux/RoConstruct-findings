// roc 2007-08 0077b820  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b820
//
// 0077b820  b9d85e8c00           mov ecx, 0x8c5ed8
// 0077b825  e996b4c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077b820 { void m(); };
extern T_func_0077b820 G1_func_0077b820;
void func_0077b820()
{
    G1_func_0077b820.m();
}
