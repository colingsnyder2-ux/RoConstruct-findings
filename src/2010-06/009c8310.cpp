// roc 2010-06 009c8310  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8310
//
// 009c8310  6880da9d00           push 0x9dda80
// 009c8315  e84907deff           call 0x7a8a63
// 009c831a  59                   pop ecx
// 009c831b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8310;
extern void G1_func_009c8310(void*);
void func_009c8310()
{
    G1_func_009c8310(&G2_func_009c8310);
}
