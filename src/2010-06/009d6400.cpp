// from server: 100% by colin
// roc 2010-06 009d6400  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6400
//
// 009d6400  6a00                 push 0
// 009d6402  6a02                 push 2
// 009d6404  68f4000000           push 0xf4
// 009d6409  6840ffa200           push 0xa2ff40
// 009d640e  685450a400           push 0xa45054
// 009d6413  b98003c200           mov ecx, 0xc20380
// 009d6418  e8d329cfff           call 0x6c8df0
// 009d641d  68106f9e00           push 0x9e6f10
// 009d6422  e83c26ddff           call 0x7a8a63
// 009d6427  59                   pop ecx
// 009d6428  c3                   ret 

extern int g_009d6400_0;
extern int g_009d6400_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6400(void*);
struct O_009d6400 { int m(void*, void*, int, int, int); };
extern O_009d6400 g_obj_009d6400;
extern int g_tail_009d6400;
void func_009d6400()
{
    g_obj_009d6400.m((void*)&g_009d6400_0, (void*)&g_009d6400_1, 244, 2, 0);
    tail_fn_009d6400(&g_tail_009d6400);
}