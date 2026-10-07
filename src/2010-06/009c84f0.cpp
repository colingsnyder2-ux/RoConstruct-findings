// roc 2010-06 009c84f0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c84f0
//
// 009c84f0  6830dc9d00           push 0x9ddc30
// 009c84f5  e86905deff           call 0x7a8a63
// 009c84fa  59                   pop ecx
// 009c84fb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c84f0;
extern void G1_func_009c84f0(void*);
void func_009c84f0()
{
    G1_func_009c84f0(&G2_func_009c84f0);
}
