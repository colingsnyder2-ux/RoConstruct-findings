// roc 2007-08 007784e0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007784e0
//
// 007784e0  c7058cdf8b00b4707800 mov dword ptr [0x8bdf8c], 0x7870b4
// 007784ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007784e0;
extern char G2_func_007784e0;
void func_007784e0()
{
    G1_func_007784e0 = &G2_func_007784e0;
}
