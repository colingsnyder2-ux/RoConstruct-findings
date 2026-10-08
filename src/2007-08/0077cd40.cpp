// roc 2007-08 0077cd40  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd40
//
// 0077cd40  b908988c00           mov ecx, 0x8c9808
// 0077cd45  e9e637faff           jmp 0x720530
// auto-matched from its assembly shape

struct T_func_0077cd40 { void m(); };
extern T_func_0077cd40 G1_func_0077cd40;
void func_0077cd40()
{
    G1_func_0077cd40.m();
}
