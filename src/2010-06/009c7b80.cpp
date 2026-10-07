// roc 2010-06 009c7b80  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7b80
//
// 009c7b80  68c0d39d00           push 0x9dd3c0
// 009c7b85  e8d90edeff           call 0x7a8a63
// 009c7b8a  59                   pop ecx
// 009c7b8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7b80;
extern void G1_func_009c7b80(void*);
void func_009c7b80()
{
    G1_func_009c7b80(&G2_func_009c7b80);
}
