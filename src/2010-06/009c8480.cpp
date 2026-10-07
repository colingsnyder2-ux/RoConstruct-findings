// roc 2010-06 009c8480  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8480
//
// 009c8480  68e0db9d00           push 0x9ddbe0
// 009c8485  e8d905deff           call 0x7a8a63
// 009c848a  59                   pop ecx
// 009c848b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8480;
extern void G1_func_009c8480(void*);
void func_009c8480()
{
    G1_func_009c8480(&G2_func_009c8480);
}
