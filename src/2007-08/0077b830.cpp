// roc 2007-08 0077b830  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b830
//
// 0077b830  c70548608c00b4707800 mov dword ptr [0x8c6048], 0x7870b4
// 0077b83a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b830;
extern char G2_func_0077b830;
void func_0077b830()
{
    G1_func_0077b830 = &G2_func_0077b830;
}
