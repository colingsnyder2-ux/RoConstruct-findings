// from server: 100% by colin
// roc 2010-06 009d0170  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0170
//
// 009d0170  6a00                 push 0
// 009d0172  6a0f                 push 0xf
// 009d0174  68a0000000           push 0xa0
// 009d0179  6820e7a000           push 0xa0e720
// 009d017e  685860a300           push 0xa36058
// 009d0183  b944aec100           mov ecx, 0xc1ae44
// 009d0188  e89322c6ff           call 0x632420
// 009d018d  6850369e00           push 0x9e3650
// 009d0192  e8cc88ddff           call 0x7a8a63
// 009d0197  59                   pop ecx
// 009d0198  c3                   ret 

extern int g_009d0170_0;
extern int g_009d0170_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d0170(void*);
struct O_009d0170 { int m(void*, void*, int, int, int); };
extern O_009d0170 g_obj_009d0170;
extern int g_tail_009d0170;
void func_009d0170()
{
    g_obj_009d0170.m((void*)&g_009d0170_0, (void*)&g_009d0170_1, 160, 15, 0);
    tail_fn_009d0170(&g_tail_009d0170);
}