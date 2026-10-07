// roc 2008-06 007ff9e0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff9e0
//
// 007ff9e0  c705d4ab9700c4f78300 mov dword ptr [0x97abd4], 0x83f7c4
// 007ff9ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007ff9e0;
extern char G2_func_007ff9e0;
void func_007ff9e0()
{
    G1_func_007ff9e0 = &G2_func_007ff9e0;
}
