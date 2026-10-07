// roc 2010-06 009c8340  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8340
//
// 009c8340  68b0da9d00           push 0x9ddab0
// 009c8345  e81907deff           call 0x7a8a63
// 009c834a  59                   pop ecx
// 009c834b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8340;
extern void G1_func_009c8340(void*);
void func_009c8340()
{
    G1_func_009c8340(&G2_func_009c8340);
}
