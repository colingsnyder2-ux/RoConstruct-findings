// roc 2010-06 009d9c40  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9c40
//
// 009d9c40  68c0909e00           push 0x9e90c0
// 009d9c45  e819eedcff           call 0x7a8a63
// 009d9c4a  59                   pop ecx
// 009d9c4b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9c40;
extern void G1_func_009d9c40(void*);
void func_009d9c40()
{
    G1_func_009d9c40(&G2_func_009d9c40);
}
