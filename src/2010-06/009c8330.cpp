// roc 2010-06 009c8330  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8330
//
// 009c8330  68a0da9d00           push 0x9ddaa0
// 009c8335  e82907deff           call 0x7a8a63
// 009c833a  59                   pop ecx
// 009c833b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8330;
extern void G1_func_009c8330(void*);
void func_009c8330()
{
    G1_func_009c8330(&G2_func_009c8330);
}
