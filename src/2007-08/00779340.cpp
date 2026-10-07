// roc 2007-08 00779340  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779340
//
// 00779340  b9740c8c00           mov ecx, 0x8c0c74
// 00779345  e98634dbff           jmp 0x52c7d0
// auto-matched from its assembly shape

struct T_func_00779340 { void m(); };
extern T_func_00779340 G1_func_00779340;
void func_00779340()
{
    G1_func_00779340.m();
}
