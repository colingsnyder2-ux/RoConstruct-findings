// roc 2007-08 00779f20  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779f20
//
// 00779f20  c70528248c00b4707800 mov dword ptr [0x8c2428], 0x7870b4
// 00779f2a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779f20;
extern char G2_func_00779f20;
void func_00779f20()
{
    G1_func_00779f20 = &G2_func_00779f20;
}
