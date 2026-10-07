// roc 2010-06 009c8400  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8400
//
// 009c8400  6870db9d00           push 0x9ddb70
// 009c8405  e85906deff           call 0x7a8a63
// 009c840a  59                   pop ecx
// 009c840b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8400;
extern void G1_func_009c8400(void*);
void func_009c8400()
{
    G1_func_009c8400(&G2_func_009c8400);
}
