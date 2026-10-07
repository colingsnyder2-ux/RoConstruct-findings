// roc 2010-06 009d95d0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d95d0
//
// 009d95d0  6810909e00           push 0x9e9010
// 009d95d5  e889f4dcff           call 0x7a8a63
// 009d95da  59                   pop ecx
// 009d95db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d95d0;
extern void G1_func_009d95d0(void*);
void func_009d95d0()
{
    G1_func_009d95d0(&G2_func_009d95d0);
}
