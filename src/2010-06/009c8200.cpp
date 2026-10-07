// roc 2010-06 009c8200  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8200
//
// 009c8200  68e0d99d00           push 0x9dd9e0
// 009c8205  e85908deff           call 0x7a8a63
// 009c820a  59                   pop ecx
// 009c820b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8200;
extern void G1_func_009c8200(void*);
void func_009c8200()
{
    G1_func_009c8200(&G2_func_009c8200);
}
