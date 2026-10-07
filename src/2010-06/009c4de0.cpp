// roc 2010-06 009c4de0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4de0
//
// 009c4de0  6850c09d00           push 0x9dc050
// 009c4de5  e8793cdeff           call 0x7a8a63
// 009c4dea  59                   pop ecx
// 009c4deb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c4de0;
extern void G1_func_009c4de0(void*);
void func_009c4de0()
{
    G1_func_009c4de0(&G2_func_009c4de0);
}
