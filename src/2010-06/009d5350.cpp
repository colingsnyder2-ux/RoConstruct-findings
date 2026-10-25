// from server: 100% by colin
// roc 2010-06 009d5350  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5350
//
// 009d5350  6a00                 push 0
// 009d5352  6a0f                 push 0xf
// 009d5354  6884010000           push 0x184
// 009d5359  68282aa400           push 0xa42a28
// 009d535e  68302aa400           push 0xa42a30
// 009d5363  b9c0f5c100           mov ecx, 0xc1f5c0
// 009d5368  e8c324ceff           call 0x6b7830
// 009d536d  6830649e00           push 0x9e6430
// 009d5372  e8ec36ddff           call 0x7a8a63
// 009d5377  59                   pop ecx
// 009d5378  c3                   ret 

extern int g_009d5350_0;
extern int g_009d5350_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5350(void*);
struct O_009d5350 { int m(void*, void*, int, int, int); };
extern O_009d5350 g_obj_009d5350;
extern int g_tail_009d5350;
void func_009d5350()
{
    g_obj_009d5350.m((void*)&g_009d5350_0, (void*)&g_009d5350_1, 388, 15, 0);
    tail_fn_009d5350(&g_tail_009d5350);
}