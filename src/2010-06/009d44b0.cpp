// from server: 100% by colin
// roc 2010-06 009d44b0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d44b0
//
// 009d44b0  6a0f                 push 0xf
// 009d44b2  68b0887100           push 0x7188b0
// 009d44b7  6870877100           push 0x718770
// 009d44bc  683884a100           push 0xa18438
// 009d44c1  68f002a400           push 0xa402f0
// 009d44c6  b9a0ecc100           mov ecx, 0xc1eca0
// 009d44cb  e83099ccff           call 0x69de00
// 009d44d0  68e05a9e00           push 0x9e5ae0
// 009d44d5  e88945ddff           call 0x7a8a63
// 009d44da  59                   pop ecx
// 009d44db  c3                   ret 

extern int g_009d44b0_0;
extern int g_009d44b0_1;
extern int g_009d44b0_2;
extern int g_009d44b0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d44b0(void*);
struct O_009d44b0 { int m(void*, void*, void*, void*, int); };
extern O_009d44b0 g_obj_009d44b0;
extern int g_tail_009d44b0;
void func_009d44b0()
{
    g_obj_009d44b0.m((void*)&g_009d44b0_0, (void*)&g_009d44b0_1, (void*)&g_009d44b0_2, (void*)&g_009d44b0_3, 15);
    tail_fn_009d44b0(&g_tail_009d44b0);
}