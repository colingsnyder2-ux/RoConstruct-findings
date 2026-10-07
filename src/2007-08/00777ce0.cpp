// roc 2007-08 00777ce0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777ce0
//
// 00777ce0  b988bb8b00           mov ecx, 0x8bbb88
// 00777ce5  e9d6efc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777ce0 { void m(); };
extern T_func_00777ce0 G1_func_00777ce0;
void func_00777ce0()
{
    G1_func_00777ce0.m();
}
