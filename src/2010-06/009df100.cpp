// roc 2010-06 009df100  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df100
//
// 009df100  c70578bec0001809a000 mov dword ptr [0xc0be78], 0xa00918
// 009df10a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df100;
extern char G2_func_009df100;
void func_009df100()
{
    G1_func_009df100 = &G2_func_009df100;
}
