// roc 2010-06 009c86c0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c86c0
//
// 009c86c0  6880df9d00           push 0x9ddf80
// 009c86c5  e89903deff           call 0x7a8a63
// 009c86ca  59                   pop ecx
// 009c86cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c86c0;
extern void G1_func_009c86c0(void*);
void func_009c86c0()
{
    G1_func_009c86c0(&G2_func_009c86c0);
}
