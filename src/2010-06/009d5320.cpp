// from server: 100% by colin
// roc 2010-06 009d5320  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5320
//
// 009d5320  6a00                 push 0
// 009d5322  6a0f                 push 0xf
// 009d5324  6890010000           push 0x190
// 009d5329  68282aa400           push 0xa42a28
// 009d532e  681c2aa400           push 0xa42a1c
// 009d5333  b9e4f7c100           mov ecx, 0xc1f7e4
// 009d5338  e8f324ceff           call 0x6b7830
// 009d533d  6810679e00           push 0x9e6710
// 009d5342  e81c37ddff           call 0x7a8a63
// 009d5347  59                   pop ecx
// 009d5348  c3                   ret 

extern int g_009d5320_0;
extern int g_009d5320_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5320(void*);
struct O_009d5320 { int m(void*, void*, int, int, int); };
extern O_009d5320 g_obj_009d5320;
extern int g_tail_009d5320;
void func_009d5320()
{
    g_obj_009d5320.m((void*)&g_009d5320_0, (void*)&g_009d5320_1, 400, 15, 0);
    tail_fn_009d5320(&g_tail_009d5320);
}