// roc 2007-08 0077bee0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bee0
//
// 0077bee0  b9386b8c00           mov ecx, 0x8c6b38
// 0077bee5  e976f8e5ff           jmp 0x5db760
// auto-matched from its assembly shape

struct T_func_0077bee0 { void m(); };
extern T_func_0077bee0 G1_func_0077bee0;
void func_0077bee0()
{
    G1_func_0077bee0.m();
}
