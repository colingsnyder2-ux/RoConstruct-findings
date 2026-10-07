// roc 2008-06 007fc890  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc890
//
// 007fc890  c705d03f970030b78000 mov dword ptr [0x973fd0], 0x80b730
// 007fc89a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fc890;
extern char G2_func_007fc890;
void func_007fc890()
{
    G1_func_007fc890 = &G2_func_007fc890;
}
