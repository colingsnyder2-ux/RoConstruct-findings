// roc 2010-06 009d9310  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9310
//
// 009d9310  68d08d9e00           push 0x9e8dd0
// 009d9315  e849f7dcff           call 0x7a8a63
// 009d931a  59                   pop ecx
// 009d931b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009d9310;
extern void G1_func_009d9310(void*);
void func_009d9310()
{
    G1_func_009d9310(&G2_func_009d9310);
}
