// roc 2010-06 009c4410  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c4410
//
// 009c4410  68c0b99d00           push 0x9db9c0
// 009c4415  e84946deff           call 0x7a8a63
// 009c441a  59                   pop ecx
// 009c441b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c4410;
extern void G1_func_009c4410(void*);
void func_009c4410()
{
    G1_func_009c4410(&G2_func_009c4410);
}
