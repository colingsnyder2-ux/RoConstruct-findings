// roc 2010-06 009c83e0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c83e0
//
// 009c83e0  6850db9d00           push 0x9ddb50
// 009c83e5  e87906deff           call 0x7a8a63
// 009c83ea  59                   pop ecx
// 009c83eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c83e0;
extern void G1_func_009c83e0(void*);
void func_009c83e0()
{
    G1_func_009c83e0(&G2_func_009c83e0);
}
