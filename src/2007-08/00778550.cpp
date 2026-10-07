// roc 2007-08 00778550  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778550
//
// 00778550  b9b8df8b00           mov ecx, 0x8bdfb8
// 00778555  e966e7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00778550 { void m(); };
extern T_func_00778550 G1_func_00778550;
void func_00778550()
{
    G1_func_00778550.m();
}
