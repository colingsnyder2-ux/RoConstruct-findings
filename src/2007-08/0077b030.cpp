// roc 2007-08 0077b030  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b030
//
// 0077b030  b948518c00           mov ecx, 0x8c5148
// 0077b035  e986bcc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077b030 { void m(); };
extern T_func_0077b030 G1_func_0077b030;
void func_0077b030()
{
    G1_func_0077b030.m();
}
