// roc 2008-06 007fda70  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fda70
//
// 007fda70  c705545c970030b78000 mov dword ptr [0x975c54], 0x80b730
// 007fda7a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_007fda70;
extern char G2_func_007fda70;
void func_007fda70()
{
    G1_func_007fda70 = &G2_func_007fda70;
}
