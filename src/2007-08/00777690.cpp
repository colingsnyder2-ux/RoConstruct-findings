// roc 2007-08 00777690  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777690
//
// 00777690  b9c0b78b00           mov ecx, 0x8bb7c0
// 00777695  e926f6c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777690 { void m(); };
extern T_func_00777690 G1_func_00777690;
void func_00777690()
{
    G1_func_00777690.m();
}
