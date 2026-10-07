// roc 2010-06 009c83f0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c83f0
//
// 009c83f0  6860db9d00           push 0x9ddb60
// 009c83f5  e86906deff           call 0x7a8a63
// 009c83fa  59                   pop ecx
// 009c83fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c83f0;
extern void G1_func_009c83f0(void*);
void func_009c83f0()
{
    G1_func_009c83f0(&G2_func_009c83f0);
}
