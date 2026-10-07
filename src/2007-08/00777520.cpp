// roc 2007-08 00777520  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777520
//
// 00777520  b910b08b00           mov ecx, 0x8bb010
// 00777525  e9460fcaff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00777520 { void m(); };
extern T_func_00777520 G1_func_00777520;
void func_00777520()
{
    G1_func_00777520.m();
}
