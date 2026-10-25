// from server: 100% by colin
// roc 2010-06 009d47b0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d47b0
//
// 009d47b0  6a0f                 push 0xf
// 009d47b2  68b0887100           push 0x7188b0
// 009d47b7  6870877100           push 0x718770
// 009d47bc  683884a100           push 0xa18438
// 009d47c1  68ec03a400           push 0xa403ec
// 009d47c6  b9f0eac100           mov ecx, 0xc1eaf0
// 009d47cb  e8d09dccff           call 0x69e5a0
// 009d47d0  68e05c9e00           push 0x9e5ce0
// 009d47d5  e88942ddff           call 0x7a8a63
// 009d47da  59                   pop ecx
// 009d47db  c3                   ret 

extern int g_009d47b0_0;
extern int g_009d47b0_1;
extern int g_009d47b0_2;
extern int g_009d47b0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d47b0(void*);
struct O_009d47b0 { int m(void*, void*, void*, void*, int); };
extern O_009d47b0 g_obj_009d47b0;
extern int g_tail_009d47b0;
void func_009d47b0()
{
    g_obj_009d47b0.m((void*)&g_009d47b0_0, (void*)&g_009d47b0_1, (void*)&g_009d47b0_2, (void*)&g_009d47b0_3, 15);
    tail_fn_009d47b0(&g_tail_009d47b0);
}