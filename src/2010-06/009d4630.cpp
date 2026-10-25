// from server: 100% by colin
// roc 2010-06 009d4630  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4630
//
// 009d4630  6a0f                 push 0xf
// 009d4632  68b0887100           push 0x7188b0
// 009d4637  6870877100           push 0x718770
// 009d463c  683884a100           push 0xa18438
// 009d4641  687803a400           push 0xa40378
// 009d4646  b998ebc100           mov ecx, 0xc1eb98
// 009d464b  e8309cccff           call 0x69e280
// 009d4650  68e05b9e00           push 0x9e5be0
// 009d4655  e80944ddff           call 0x7a8a63
// 009d465a  59                   pop ecx
// 009d465b  c3                   ret 

extern int g_009d4630_0;
extern int g_009d4630_1;
extern int g_009d4630_2;
extern int g_009d4630_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4630(void*);
struct O_009d4630 { int m(void*, void*, void*, void*, int); };
extern O_009d4630 g_obj_009d4630;
extern int g_tail_009d4630;
void func_009d4630()
{
    g_obj_009d4630.m((void*)&g_009d4630_0, (void*)&g_009d4630_1, (void*)&g_009d4630_2, (void*)&g_009d4630_3, 15);
    tail_fn_009d4630(&g_tail_009d4630);
}