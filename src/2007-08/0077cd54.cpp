// roc 2007-08 0077cd54  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd54
//
// 0077cd54  b960988c00           mov ecx, 0x8c9860
// 0077cd59  e97083faff           jmp 0x7250ce
// auto-matched from its assembly shape

struct T_func_0077cd54 { void m(); };
extern T_func_0077cd54 G1_func_0077cd54;
void func_0077cd54()
{
    G1_func_0077cd54.m();
}
