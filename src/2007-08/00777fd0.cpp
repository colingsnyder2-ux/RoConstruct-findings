// roc 2007-08 00777fd0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777fd0
//
// 00777fd0  b984db8b00           mov ecx, 0x8bdb84
// 00777fd5  e94685d0ff           jmp 0x480520
// auto-matched from its assembly shape

struct T_func_00777fd0 { void m(); };
extern T_func_00777fd0 G1_func_00777fd0;
void func_00777fd0()
{
    G1_func_00777fd0.m();
}
