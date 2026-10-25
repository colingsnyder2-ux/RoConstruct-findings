// from server: 100% by colin
// roc 2010-06 009d6460  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6460
//
// 009d6460  6a00                 push 0
// 009d6462  6a02                 push 2
// 009d6464  6844010000           push 0x144
// 009d6469  6840ffa200           push 0xa2ff40
// 009d646e  688c50a400           push 0xa4508c
// 009d6473  b9c803c200           mov ecx, 0xc203c8
// 009d6478  e87329cfff           call 0x6c8df0
// 009d647d  68906e9e00           push 0x9e6e90
// 009d6482  e8dc25ddff           call 0x7a8a63
// 009d6487  59                   pop ecx
// 009d6488  c3                   ret 

extern int g_009d6460_0;
extern int g_009d6460_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6460(void*);
struct O_009d6460 { int m(void*, void*, int, int, int); };
extern O_009d6460 g_obj_009d6460;
extern int g_tail_009d6460;
void func_009d6460()
{
    g_obj_009d6460.m((void*)&g_009d6460_0, (void*)&g_009d6460_1, 324, 2, 0);
    tail_fn_009d6460(&g_tail_009d6460);
}