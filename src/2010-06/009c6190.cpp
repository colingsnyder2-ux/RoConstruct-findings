// roc 2010-06 009c6190  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c6190
//
// 009c6190  6870c19d00           push 0x9dc170
// 009c6195  e8c928deff           call 0x7a8a63
// 009c619a  59                   pop ecx
// 009c619b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c6190;
extern void G1_func_009c6190(void*);
void func_009c6190()
{
    G1_func_009c6190(&G2_func_009c6190);
}
