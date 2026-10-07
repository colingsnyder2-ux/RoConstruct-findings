// roc 2007-08 00777490  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777490
//
// 00777490  b9b0b28b00           mov ecx, 0x8bb2b0
// 00777495  e926f8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777490 { void m(); };
extern T_func_00777490 G1_func_00777490;
void func_00777490()
{
    G1_func_00777490.m();
}
