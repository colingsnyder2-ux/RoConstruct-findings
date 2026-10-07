// roc 2010-06 009c71f0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c71f0
//
// 009c71f0  68e0cd9d00           push 0x9dcde0
// 009c71f5  e86918deff           call 0x7a8a63
// 009c71fa  59                   pop ecx
// 009c71fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c71f0;
extern void G1_func_009c71f0(void*);
void func_009c71f0()
{
    G1_func_009c71f0(&G2_func_009c71f0);
}
