// roc 2007-08 0077b040  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b040
//
// 0077b040  b9a8508c00           mov ecx, 0x8c50a8
// 0077b045  e92627e2ff           jmp 0x59d770
// auto-matched from its assembly shape

struct T_func_0077b040 { void m(); };
extern T_func_0077b040 G1_func_0077b040;
void func_0077b040()
{
    G1_func_0077b040.m();
}
