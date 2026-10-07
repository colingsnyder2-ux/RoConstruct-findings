// roc 2007-08 0077b600  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b600
//
// 0077b600  b9985c8c00           mov ecx, 0x8c5c98
// 0077b605  e9d6f0ddff           jmp 0x55a6e0
// auto-matched from its assembly shape

struct T_func_0077b600 { void m(); };
extern T_func_0077b600 G1_func_0077b600;
void func_0077b600()
{
    G1_func_0077b600.m();
}
