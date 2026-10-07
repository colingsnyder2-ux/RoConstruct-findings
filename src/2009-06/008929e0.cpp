// roc 2009-06 008929e0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008929e0
//
// 008929e0  6840d38900           push 0x89d340
// 008929e5  e81171e8ff           call 0x719afb
// 008929ea  59                   pop ecx
// 008929eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008929e0;
extern void G1_func_008929e0(void*);
void func_008929e0()
{
    G1_func_008929e0(&G2_func_008929e0);
}
