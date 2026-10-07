// roc 2011-06 00a170e0  unit: seg_00a10000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a170e0
//
// 00a170e0  68901aa300           push 0xa31a90
// 00a170e5  e87340dfff           call 0x80b15d
// 00a170ea  59                   pop ecx
// 00a170eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00a170e0;
extern void G1_func_00a170e0(void*);
void func_00a170e0()
{
    G1_func_00a170e0(&G2_func_00a170e0);
}
