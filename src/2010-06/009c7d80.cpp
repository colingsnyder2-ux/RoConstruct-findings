// roc 2010-06 009c7d80  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7d80
//
// 009c7d80  6860d59d00           push 0x9dd560
// 009c7d85  e8d90cdeff           call 0x7a8a63
// 009c7d8a  59                   pop ecx
// 009c7d8b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7d80;
extern void G1_func_009c7d80(void*);
void func_009c7d80()
{
    G1_func_009c7d80(&G2_func_009c7d80);
}
