// roc 2007-08 0077a820  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a820
//
// 0077a820  b990358c00           mov ecx, 0x8c3590
// 0077a825  e996c4c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a820 { void m(); };
extern T_func_0077a820 G1_func_0077a820;
void func_0077a820()
{
    G1_func_0077a820.m();
}
