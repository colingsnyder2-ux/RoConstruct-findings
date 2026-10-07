// roc 2010-06 009c8390  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8390
//
// 009c8390  6820db9d00           push 0x9ddb20
// 009c8395  e8c906deff           call 0x7a8a63
// 009c839a  59                   pop ecx
// 009c839b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8390;
extern void G1_func_009c8390(void*);
void func_009c8390()
{
    G1_func_009c8390(&G2_func_009c8390);
}
