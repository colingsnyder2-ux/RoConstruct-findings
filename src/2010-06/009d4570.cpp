// from server: 100% by colin
// roc 2010-06 009d4570  unit: seg_009d0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4570
//
// 009d4570  6a0f                 push 0xf
// 009d4572  68b0887100           push 0x7188b0
// 009d4577  6870877100           push 0x718770
// 009d457c  683884a100           push 0xa18438
// 009d4581  683403a400           push 0xa40334
// 009d4586  b914ebc100           mov ecx, 0xc1eb14
// 009d458b  e8909bccff           call 0x69e120
// 009d4590  68605b9e00           push 0x9e5b60
// 009d4595  e8c944ddff           call 0x7a8a63
// 009d459a  59                   pop ecx
// 009d459b  c3                   ret 

extern int g_009d4570_0;
extern int g_009d4570_1;
extern int g_009d4570_2;
extern int g_009d4570_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4570(void*);
struct O_009d4570 { int m(void*, void*, void*, void*, int); };
extern O_009d4570 g_obj_009d4570;
extern int g_tail_009d4570;
void func_009d4570()
{
    g_obj_009d4570.m((void*)&g_009d4570_0, (void*)&g_009d4570_1, (void*)&g_009d4570_2, (void*)&g_009d4570_3, 15);
    tail_fn_009d4570(&g_tail_009d4570);
}