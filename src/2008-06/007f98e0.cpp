// roc 2008-06 007f98e0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f98e0
//
// 007f98e0  6840188000           push 0x801840
// 007f98e5  e8c57eeaff           call 0x6a17af
// 007f98ea  59                   pop ecx
// 007f98eb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_007f98e0;
extern void G1_func_007f98e0(void*);
void func_007f98e0()
{
    G1_func_007f98e0(&G2_func_007f98e0);
}
