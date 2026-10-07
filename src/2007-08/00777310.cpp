// roc 2007-08 00777310  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777310
//
// 00777310  b9e8ae8b00           mov ecx, 0x8baee8
// 00777315  e9861dddff           jmp 0x5490a0
// auto-matched from its assembly shape

struct T_func_00777310 { void m(); };
extern T_func_00777310 G1_func_00777310;
void func_00777310()
{
    G1_func_00777310.m();
}
