// roc 2010-06 009c83c0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c83c0
//
// 009c83c0  6830db9d00           push 0x9ddb30
// 009c83c5  e89906deff           call 0x7a8a63
// 009c83ca  59                   pop ecx
// 009c83cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c83c0;
extern void G1_func_009c83c0(void*);
void func_009c83c0()
{
    G1_func_009c83c0(&G2_func_009c83c0);
}
