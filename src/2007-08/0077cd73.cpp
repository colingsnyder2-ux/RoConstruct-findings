// roc 2007-08 0077cd73  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd73
//
// 0077cd73  b9c0988c00           mov ecx, 0x8c98c0
// 0077cd78  e9bf86faff           jmp 0x72543c
// auto-matched from its assembly shape

struct T_func_0077cd73 { void m(); };
extern T_func_0077cd73 G1_func_0077cd73;
void func_0077cd73()
{
    G1_func_0077cd73.m();
}
