// roc 2009-06 008882e0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008882e0
//
// 008882e0  68105f8900           push 0x895f10
// 008882e5  e81118e9ff           call 0x719afb
// 008882ea  59                   pop ecx
// 008882eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008882e0;
extern void G1_func_008882e0(void*);
void func_008882e0()
{
    G1_func_008882e0(&G2_func_008882e0);
}
