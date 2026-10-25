// from server: 100% by colin
// roc 2010-06 009d4150  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4150
//
// 009d4150  6a01                 push 1
// 009d4152  6a00                 push 0
// 009d4154  68002fa100           push 0xa12f00
// 009d4159  6844f2a300           push 0xa3f244
// 009d415e  68d8000000           push 0xd8
// 009d4163  b984e8c100           mov ecx, 0xc1e884
// 009d4168  e8b350ccff           call 0x699220
// 009d416d  68c0589e00           push 0x9e58c0
// 009d4172  e8ec48ddff           call 0x7a8a63
// 009d4177  59                   pop ecx
// 009d4178  c3                   ret 

extern int g_009d4150_1;
extern int g_009d4150_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4150(void*);
struct O_009d4150 { int m(int, void*, void*, int, int); };
extern O_009d4150 g_obj_009d4150;
extern int g_tail_009d4150;
void func_009d4150()
{
    g_obj_009d4150.m(216, (void*)&g_009d4150_1, (void*)&g_009d4150_2, 0, 1);
    tail_fn_009d4150(&g_tail_009d4150);
}