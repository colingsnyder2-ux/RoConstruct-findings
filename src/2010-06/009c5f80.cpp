// roc 2010-06 009c5f80  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c5f80
//
// 009c5f80  6830c19d00           push 0x9dc130
// 009c5f85  e8d92adeff           call 0x7a8a63
// 009c5f8a  59                   pop ecx
// 009c5f8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c5f80;
extern void G1_func_009c5f80(void*);
void func_009c5f80()
{
    G1_func_009c5f80(&G2_func_009c5f80);
}
