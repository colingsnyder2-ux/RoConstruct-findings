// roc 2010-06 009d9c60  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c60
//
// 009d9c60  68d0909e00           push 0x9e90d0
// 009d9c65  e8f9eddcff           call 0x7a8a63
// 009d9c6a  59                   pop ecx
// 009d9c6b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9c60;
extern void G1_func_009d9c60(void*);
void func_009d9c60()
{
    G1_func_009d9c60(&G2_func_009d9c60);
}
