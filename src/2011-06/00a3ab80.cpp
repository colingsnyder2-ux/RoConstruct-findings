// roc 2011-06 00a3ab80  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ab80
//
// 00a3ab80  b970d4cc00           mov ecx, 0xccd470
// 00a3ab85  e93625a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3ab80 { void m(); };
extern T_func_00a3ab80 G1_func_00a3ab80;
void func_00a3ab80()
{
    G1_func_00a3ab80.m();
}
