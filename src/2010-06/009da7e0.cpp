// roc 2010-06 009da7e0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da7e0
//
// 009da7e0  6800949e00           push 0x9e9400
// 009da7e5  e879e2dcff           call 0x7a8a63
// 009da7ea  59                   pop ecx
// 009da7eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_009da7e0;
extern void G1_func_009da7e0(void*);
void func_009da7e0()
{
    G1_func_009da7e0(&G2_func_009da7e0);
}
