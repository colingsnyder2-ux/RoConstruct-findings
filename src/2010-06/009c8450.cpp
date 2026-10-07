// roc 2010-06 009c8450  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8450
//
// 009c8450  68b0db9d00           push 0x9ddbb0
// 009c8455  e80906deff           call 0x7a8a63
// 009c845a  59                   pop ecx
// 009c845b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8450;
extern void G1_func_009c8450(void*);
void func_009c8450()
{
    G1_func_009c8450(&G2_func_009c8450);
}
