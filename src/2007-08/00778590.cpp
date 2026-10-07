// roc 2007-08 00778590  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778590
//
// 00778590  b918e28b00           mov ecx, 0x8be218
// 00778595  e9d6fec9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778590 { void m(); };
extern T_func_00778590 G1_func_00778590;
void func_00778590()
{
    G1_func_00778590.m();
}
