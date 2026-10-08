// roc 2007-08 00779e10  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779e10
//
// 00779e10  c705e0238c00b4707800 mov dword ptr [0x8c23e0], 0x7870b4
// 00779e1a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779e10;
extern char G2_func_00779e10;
void func_00779e10()
{
    G1_func_00779e10 = &G2_func_00779e10;
}
