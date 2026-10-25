// from server: 100% by colin
// roc 2010-06 009d0140  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d0140
//
// 009d0140  6a00                 push 0
// 009d0142  6a0f                 push 0xf
// 009d0144  689c000000           push 0x9c
// 009d0149  683c60a300           push 0xa3603c
// 009d014e  684460a300           push 0xa36044
// 009d0153  b9b0aec100           mov ecx, 0xc1aeb0
// 009d0158  e8f321c6ff           call 0x632350
// 009d015d  68f0359e00           push 0x9e35f0
// 009d0162  e8fc88ddff           call 0x7a8a63
// 009d0167  59                   pop ecx
// 009d0168  c3                   ret 

extern int g_009d0140_0;
extern int g_009d0140_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d0140(void*);
struct O_009d0140 { int m(void*, void*, int, int, int); };
extern O_009d0140 g_obj_009d0140;
extern int g_tail_009d0140;
void func_009d0140()
{
    g_obj_009d0140.m((void*)&g_009d0140_0, (void*)&g_009d0140_1, 156, 15, 0);
    tail_fn_009d0140(&g_tail_009d0140);
}