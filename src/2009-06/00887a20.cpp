// roc 2009-06 00887a20  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887a20
//
// 00887a20  6820588900           push 0x895820
// 00887a25  e8d120e9ff           call 0x719afb
// 00887a2a  59                   pop ecx
// 00887a2b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00887a20;
extern void G1_func_00887a20(void*);
void func_00887a20()
{
    G1_func_00887a20(&G2_func_00887a20);
}
