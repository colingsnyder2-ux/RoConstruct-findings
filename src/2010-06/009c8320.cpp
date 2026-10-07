// roc 2010-06 009c8320  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8320
//
// 009c8320  6890da9d00           push 0x9dda90
// 009c8325  e83907deff           call 0x7a8a63
// 009c832a  59                   pop ecx
// 009c832b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8320;
extern void G1_func_009c8320(void*);
void func_009c8320()
{
    G1_func_009c8320(&G2_func_009c8320);
}
