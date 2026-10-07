// roc 2011-06 00a3ac70  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ac70
//
// 00a3ac70  b9f8d8cc00           mov ecx, 0xccd8f8
// 00a3ac75  e99618a7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a3ac70 { void m(); };
extern T_func_00a3ac70 G1_func_00a3ac70;
void func_00a3ac70()
{
    G1_func_00a3ac70.m();
}
