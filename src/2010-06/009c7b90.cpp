// roc 2010-06 009c7b90  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7b90
//
// 009c7b90  68d0d39d00           push 0x9dd3d0
// 009c7b95  e8c90edeff           call 0x7a8a63
// 009c7b9a  59                   pop ecx
// 009c7b9b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7b90;
extern void G1_func_009c7b90(void*);
void func_009c7b90()
{
    G1_func_009c7b90(&G2_func_009c7b90);
}
