// roc 2007-08 0077bdb0  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bdb0
//
// 0077bdb0  c705806a8c00b4707800 mov dword ptr [0x8c6a80], 0x7870b4
// 0077bdba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077bdb0;
extern char G2_func_0077bdb0;
void func_0077bdb0()
{
    G1_func_0077bdb0 = &G2_func_0077bdb0;
}
