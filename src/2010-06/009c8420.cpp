// roc 2010-06 009c8420  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8420
//
// 009c8420  6890db9d00           push 0x9ddb90
// 009c8425  e83906deff           call 0x7a8a63
// 009c842a  59                   pop ecx
// 009c842b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8420;
extern void G1_func_009c8420(void*);
void func_009c8420()
{
    G1_func_009c8420(&G2_func_009c8420);
}
