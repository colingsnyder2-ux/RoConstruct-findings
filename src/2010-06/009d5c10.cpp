// from server: 100% by colin
// roc 2010-06 009d5c10  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5c10
//
// 009d5c10  6a00                 push 0
// 009d5c12  6a0f                 push 0xf
// 009d5c14  68a8000000           push 0xa8
// 009d5c19  685c8ea100           push 0xa18e5c
// 009d5c1e  687034a400           push 0xa43470
// 009d5c23  b968fcc100           mov ecx, 0xc1fc68
// 009d5c28  e88380ceff           call 0x6bdcb0
// 009d5c2d  68d06a9e00           push 0x9e6ad0
// 009d5c32  e82c2eddff           call 0x7a8a63
// 009d5c37  59                   pop ecx
// 009d5c38  c3                   ret 

extern int g_009d5c10_0;
extern int g_009d5c10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5c10(void*);
struct O_009d5c10 { int m(void*, void*, int, int, int); };
extern O_009d5c10 g_obj_009d5c10;
extern int g_tail_009d5c10;
void func_009d5c10()
{
    g_obj_009d5c10.m((void*)&g_009d5c10_0, (void*)&g_009d5c10_1, 168, 15, 0);
    tail_fn_009d5c10(&g_tail_009d5c10);
}