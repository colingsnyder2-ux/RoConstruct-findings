// roc 2010-06 009d9c80  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c80
//
// 009d9c80  6820919e00           push 0x9e9120
// 009d9c85  e8d9eddcff           call 0x7a8a63
// 009d9c8a  59                   pop ecx
// 009d9c8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9c80;
extern void G1_func_009d9c80(void*);
void func_009d9c80()
{
    G1_func_009d9c80(&G2_func_009d9c80);
}
