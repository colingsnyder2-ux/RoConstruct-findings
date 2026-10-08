// roc 2007-08 00779e80  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779e80
//
// 00779e80  c705f0248c00b4707800 mov dword ptr [0x8c24f0], 0x7870b4
// 00779e8a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779e80;
extern char G2_func_00779e80;
void func_00779e80()
{
    G1_func_00779e80 = &G2_func_00779e80;
}
