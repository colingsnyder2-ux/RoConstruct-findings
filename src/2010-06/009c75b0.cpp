// roc 2010-06 009c75b0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c75b0
//
// 009c75b0  6800d09d00           push 0x9dd000
// 009c75b5  e8a914deff           call 0x7a8a63
// 009c75ba  59                   pop ecx
// 009c75bb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c75b0;
extern void G1_func_009c75b0(void*);
void func_009c75b0()
{
    G1_func_009c75b0(&G2_func_009c75b0);
}
