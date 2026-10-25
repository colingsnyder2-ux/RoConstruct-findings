// from server: 100% by colin
// roc 2010-06 009d5750  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5750
//
// 009d5750  6a00                 push 0
// 009d5752  6a0f                 push 0xf
// 009d5754  685c010000           push 0x15c
// 009d5759  68f429a400           push 0xa429f4
// 009d575e  68b82aa400           push 0xa42ab8
// 009d5763  b9e8f8c100           mov ecx, 0xc1f8e8
// 009d5768  e84327ceff           call 0x6b7eb0
// 009d576d  6810669e00           push 0x9e6610
// 009d5772  e8ec32ddff           call 0x7a8a63
// 009d5777  59                   pop ecx
// 009d5778  c3                   ret 

extern int g_009d5750_0;
extern int g_009d5750_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5750(void*);
struct O_009d5750 { int m(void*, void*, int, int, int); };
extern O_009d5750 g_obj_009d5750;
extern int g_tail_009d5750;
void func_009d5750()
{
    g_obj_009d5750.m((void*)&g_009d5750_0, (void*)&g_009d5750_1, 348, 15, 0);
    tail_fn_009d5750(&g_tail_009d5750);
}