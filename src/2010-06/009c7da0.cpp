// roc 2010-06 009c7da0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7da0
//
// 009c7da0  6800d69d00           push 0x9dd600
// 009c7da5  e8b90cdeff           call 0x7a8a63
// 009c7daa  59                   pop ecx
// 009c7dab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7da0;
extern void G1_func_009c7da0(void*);
void func_009c7da0()
{
    G1_func_009c7da0(&G2_func_009c7da0);
}
