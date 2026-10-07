// roc 2010-06 009c84a0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c84a0
//
// 009c84a0  6800dc9d00           push 0x9ddc00
// 009c84a5  e8b905deff           call 0x7a8a63
// 009c84aa  59                   pop ecx
// 009c84ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c84a0;
extern void G1_func_009c84a0(void*);
void func_009c84a0()
{
    G1_func_009c84a0(&G2_func_009c84a0);
}
