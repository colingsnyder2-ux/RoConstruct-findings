// roc 2010-06 009c8210  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8210
//
// 009c8210  68f0d99d00           push 0x9dd9f0
// 009c8215  e84908deff           call 0x7a8a63
// 009c821a  59                   pop ecx
// 009c821b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8210;
extern void G1_func_009c8210(void*);
void func_009c8210()
{
    G1_func_009c8210(&G2_func_009c8210);
}
