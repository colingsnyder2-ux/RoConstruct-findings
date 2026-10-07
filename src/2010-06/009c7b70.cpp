// roc 2010-06 009c7b70  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7b70
//
// 009c7b70  68b0d39d00           push 0x9dd3b0
// 009c7b75  e8e90edeff           call 0x7a8a63
// 009c7b7a  59                   pop ecx
// 009c7b7b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c7b70;
extern void G1_func_009c7b70(void*);
void func_009c7b70()
{
    G1_func_009c7b70(&G2_func_009c7b70);
}
