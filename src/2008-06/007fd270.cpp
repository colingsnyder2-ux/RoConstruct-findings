// roc 2008-06 007fd270  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd270
//
// 007fd270  c705d04b970030b78000 mov dword ptr [0x974bd0], 0x80b730
// 007fd27a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fd270;
extern char G2_func_007fd270;
void func_007fd270()
{
    G1_func_007fd270 = &G2_func_007fd270;
}
