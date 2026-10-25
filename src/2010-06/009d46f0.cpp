// from server: 100% by colin
// roc 2010-06 009d46f0  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d46f0
//
// 009d46f0  6a0f                 push 0xf
// 009d46f2  68b0887100           push 0x7188b0
// 009d46f7  6870877100           push 0x718770
// 009d46fc  683884a100           push 0xa18438
// 009d4701  68b003a400           push 0xa403b0
// 009d4706  b968edc100           mov ecx, 0xc1ed68
// 009d470b  e8309dccff           call 0x69e440
// 009d4710  68605c9e00           push 0x9e5c60
// 009d4715  e84943ddff           call 0x7a8a63
// 009d471a  59                   pop ecx
// 009d471b  c3                   ret 

extern int g_009d46f0_0;
extern int g_009d46f0_1;
extern int g_009d46f0_2;
extern int g_009d46f0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d46f0(void*);
struct O_009d46f0 { int m(void*, void*, void*, void*, int); };
extern O_009d46f0 g_obj_009d46f0;
extern int g_tail_009d46f0;
void func_009d46f0()
{
    g_obj_009d46f0.m((void*)&g_009d46f0_0, (void*)&g_009d46f0_1, (void*)&g_009d46f0_2, (void*)&g_009d46f0_3, 15);
    tail_fn_009d46f0(&g_tail_009d46f0);
}