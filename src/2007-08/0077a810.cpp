// roc 2007-08 0077a810  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a810
//
// 0077a810  b920368c00           mov ecx, 0x8c3620
// 0077a815  e9a6c4c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a810 { void m(); };
extern T_func_0077a810 G1_func_0077a810;
void func_0077a810()
{
    G1_func_0077a810.m();
}
