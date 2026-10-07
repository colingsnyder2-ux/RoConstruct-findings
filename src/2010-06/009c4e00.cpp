// roc 2010-06 009c4e00  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4e00
//
// 009c4e00  6880c09d00           push 0x9dc080
// 009c4e05  e8593cdeff           call 0x7a8a63
// 009c4e0a  59                   pop ecx
// 009c4e0b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c4e00;
extern void G1_func_009c4e00(void*);
void func_009c4e00()
{
    G1_func_009c4e00(&G2_func_009c4e00);
}
