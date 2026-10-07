// roc 2007-08 0077c520  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c520
//
// 0077c520  b9f87b8c00           mov ecx, 0x8c7bf8
// 0077c525  e996a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c520 { void m(); };
extern T_func_0077c520 G1_func_0077c520;
void func_0077c520()
{
    G1_func_0077c520.m();
}
