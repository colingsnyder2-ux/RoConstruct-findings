// from server: 100% by colin
// roc 2010-06 009d5540  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5540
//
// 009d5540  6a00                 push 0
// 009d5542  6a0f                 push 0xf
// 009d5544  6858010000           push 0x158
// 009d5549  68f429a400           push 0xa429f4
// 009d554e  68a02aa400           push 0xa42aa0
// 009d5553  b940f5c100           mov ecx, 0xc1f540
// 009d5558  e87324ceff           call 0x6b79d0
// 009d555d  6830659e00           push 0x9e6530
// 009d5562  e8fc34ddff           call 0x7a8a63
// 009d5567  59                   pop ecx
// 009d5568  c3                   ret 

extern int g_009d5540_0;
extern int g_009d5540_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5540(void*);
struct O_009d5540 { int m(void*, void*, int, int, int); };
extern O_009d5540 g_obj_009d5540;
extern int g_tail_009d5540;
void func_009d5540()
{
    g_obj_009d5540.m((void*)&g_009d5540_0, (void*)&g_009d5540_1, 344, 15, 0);
    tail_fn_009d5540(&g_tail_009d5540);
}