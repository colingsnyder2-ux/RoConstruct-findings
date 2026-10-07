// roc 2010-06 009c8350  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8350
//
// 009c8350  68c0da9d00           push 0x9ddac0
// 009c8355  e80907deff           call 0x7a8a63
// 009c835a  59                   pop ecx
// 009c835b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8350;
extern void G1_func_009c8350(void*);
void func_009c8350()
{
    G1_func_009c8350(&G2_func_009c8350);
}
