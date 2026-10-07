// roc 2010-06 009c84e0  unit: seg_009c0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c84e0
//
// 009c84e0  6810dc9d00           push 0x9ddc10
// 009c84e5  e87905deff           call 0x7a8a63
// 009c84ea  59                   pop ecx
// 009c84eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009c84e0;
extern void G1_func_009c84e0(void*);
void func_009c84e0()
{
    G1_func_009c84e0(&G2_func_009c84e0);
}
