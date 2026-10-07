// roc 2010-06 009df140  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df140
//
// 009df140  c705d8bec0001809a000 mov dword ptr [0xc0bed8], 0xa00918
// 009df14a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df140;
extern char G2_func_009df140;
void func_009df140()
{
    G1_func_009df140 = &G2_func_009df140;
}
