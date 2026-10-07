// roc 2007-08 0077ccc0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ccc0
//
// 0077ccc0  b924938c00           mov ecx, 0x8c9324
// 0077ccc5  e94600f3ff           jmp 0x6acd10
// auto-matched from its assembly shape

struct T_func_0077ccc0 { void m(); };
extern T_func_0077ccc0 G1_func_0077ccc0;
void func_0077ccc0()
{
    G1_func_0077ccc0.m();
}
