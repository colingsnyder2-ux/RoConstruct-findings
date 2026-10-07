// roc 2010-06 009d91a0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d91a0
//
// 009d91a0  68e08c9e00           push 0x9e8ce0
// 009d91a5  e8b9f8dcff           call 0x7a8a63
// 009d91aa  59                   pop ecx
// 009d91ab  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d91a0;
extern void G1_func_009d91a0(void*);
void func_009d91a0()
{
    G1_func_009d91a0(&G2_func_009d91a0);
}
