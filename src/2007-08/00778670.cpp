// roc 2007-08 00778670  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778670
//
// 00778670  b9d0e08b00           mov ecx, 0x8be0d0
// 00778675  e9f6fdc9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778670 { void m(); };
extern T_func_00778670 G1_func_00778670;
void func_00778670()
{
    G1_func_00778670.m();
}
