// roc 2007-08 0077c340  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c340
//
// 0077c340  b930718c00           mov ecx, 0x8c7130
// 0077c345  e976a9c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c340 { void m(); };
extern T_func_0077c340 G1_func_0077c340;
void func_0077c340()
{
    G1_func_0077c340.m();
}
