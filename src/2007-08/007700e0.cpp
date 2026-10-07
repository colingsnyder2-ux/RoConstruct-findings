// roc 2007-08 007700e0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007700e0
//
// 007700e0  6890907700           push 0x779090
// 007700e5  e8390cecff           call 0x630d23
// 007700ea  59                   pop ecx
// 007700eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007700e0;
extern void G1_func_007700e0(void*);
void func_007700e0()
{
    G1_func_007700e0(&G2_func_007700e0);
}
