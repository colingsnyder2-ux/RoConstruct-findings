// roc 2009-06 0089c8e0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c8e0
//
// 0089c8e0  c70560f1a40030d28a00 mov dword ptr [0xa4f160], 0x8ad230
// 0089c8ea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089c8e0;
extern char G2_func_0089c8e0;
void func_0089c8e0()
{
    G1_func_0089c8e0 = &G2_func_0089c8e0;
}
