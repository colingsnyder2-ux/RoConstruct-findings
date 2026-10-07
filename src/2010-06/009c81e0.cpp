// roc 2010-06 009c81e0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c81e0
//
// 009c81e0  68c0d99d00           push 0x9dd9c0
// 009c81e5  e87908deff           call 0x7a8a63
// 009c81ea  59                   pop ecx
// 009c81eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c81e0;
extern void G1_func_009c81e0(void*);
void func_009c81e0()
{
    G1_func_009c81e0(&G2_func_009c81e0);
}
