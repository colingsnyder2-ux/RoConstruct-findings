// roc 2010-06 009c85f0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c85f0
//
// 009c85f0  6870de9d00           push 0x9dde70
// 009c85f5  e86904deff           call 0x7a8a63
// 009c85fa  59                   pop ecx
// 009c85fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c85f0;
extern void G1_func_009c85f0(void*);
void func_009c85f0()
{
    G1_func_009c85f0(&G2_func_009c85f0);
}
