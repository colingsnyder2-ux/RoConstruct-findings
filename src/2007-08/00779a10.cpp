// roc 2007-08 00779a10  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779a10
//
// 00779a10  b9501c8c00           mov ecx, 0x8c1c50
// 00779a15  e906bdfaff           jmp 0x725720
// auto-matched from its assembly shape

struct T_func_00779a10 { void m(); };
extern T_func_00779a10 G1_func_00779a10;
void func_00779a10()
{
    G1_func_00779a10.m();
}
