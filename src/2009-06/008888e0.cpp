// roc 2009-06 008888e0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008888e0
//
// 008888e0  6830648900           push 0x896430
// 008888e5  e81112e9ff           call 0x719afb
// 008888ea  59                   pop ecx
// 008888eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008888e0;
extern void G1_func_008888e0(void*);
void func_008888e0()
{
    G1_func_008888e0(&G2_func_008888e0);
}
