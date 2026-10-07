// roc 2007-08 00777b70  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777b70
//
// 00777b70  b988b98b00           mov ecx, 0x8bb988
// 00777b75  e946f1c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777b70 { void m(); };
extern T_func_00777b70 G1_func_00777b70;
void func_00777b70()
{
    G1_func_00777b70.m();
}
