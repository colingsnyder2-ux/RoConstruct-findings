// roc 2009-06 008887e0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008887e0
//
// 008887e0  6840638900           push 0x896340
// 008887e5  e81113e9ff           call 0x719afb
// 008887ea  59                   pop ecx
// 008887eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008887e0;
extern void G1_func_008887e0(void*);
void func_008887e0()
{
    G1_func_008887e0(&G2_func_008887e0);
}
