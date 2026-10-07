// roc 2007-08 00777480  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777480
//
// 00777480  b940b38b00           mov ecx, 0x8bb340
// 00777485  e936f8c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_00777480 { void m(); };
extern T_func_00777480 G1_func_00777480;
void func_00777480()
{
    G1_func_00777480.m();
}
