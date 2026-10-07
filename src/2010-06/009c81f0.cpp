// roc 2010-06 009c81f0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c81f0
//
// 009c81f0  68d0d99d00           push 0x9dd9d0
// 009c81f5  e86908deff           call 0x7a8a63
// 009c81fa  59                   pop ecx
// 009c81fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c81f0;
extern void G1_func_009c81f0(void*);
void func_009c81f0()
{
    G1_func_009c81f0(&G2_func_009c81f0);
}
