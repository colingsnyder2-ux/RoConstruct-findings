// roc 2007-08 00777dc0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777dc0
//
// 00777dc0  b9b8be8b00           mov ecx, 0x8bbeb8
// 00777dc5  e94646cdff           jmp 0x44c410
// auto-matched from its assembly shape

struct T_func_00777dc0 { void m(); };
extern T_func_00777dc0 G1_func_00777dc0;
void func_00777dc0()
{
    G1_func_00777dc0.m();
}
