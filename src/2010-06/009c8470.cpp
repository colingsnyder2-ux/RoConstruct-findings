// roc 2010-06 009c8470  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c8470
//
// 009c8470  68d0db9d00           push 0x9ddbd0
// 009c8475  e8e905deff           call 0x7a8a63
// 009c847a  59                   pop ecx
// 009c847b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c8470;
extern void G1_func_009c8470(void*);
void func_009c8470()
{
    G1_func_009c8470(&G2_func_009c8470);
}
