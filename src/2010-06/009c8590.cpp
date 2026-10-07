// roc 2010-06 009c8590  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8590
//
// 009c8590  6870dc9d00           push 0x9ddc70
// 009c8595  e8c904deff           call 0x7a8a63
// 009c859a  59                   pop ecx
// 009c859b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8590;
extern void G1_func_009c8590(void*);
void func_009c8590()
{
    G1_func_009c8590(&G2_func_009c8590);
}
