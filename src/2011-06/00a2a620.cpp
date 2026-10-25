// from server: 100% by colin
// roc 2011-06 00a2a620  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a620
//
// 00a2a620  6a00                 push 0
// 00a2a622  6a1f                 push 0x1f
// 00a2a624  6894000000           push 0x94
// 00a2a629  68e483a700           push 0xa783e4
// 00a2a62e  68bc90aa00           push 0xaa90bc
// 00a2a633  b9cc1dcd00           mov ecx, 0xcd1dcc
// 00a2a638  e8535fccff           call 0x6f0590
// 00a2a63d  6840d4a300           push 0xa3d440
// 00a2a642  e8160bdeff           call 0x80b15d
// 00a2a647  59                   pop ecx
// 00a2a648  c3                   ret 

extern int g_00a2a620_0;
extern int g_00a2a620_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a620(void*);
struct O_00a2a620 { int m(void*, void*, int, int, int); };
extern O_00a2a620 g_obj_00a2a620;
extern int g_tail_00a2a620;
void func_00a2a620()
{
    g_obj_00a2a620.m((void*)&g_00a2a620_0, (void*)&g_00a2a620_1, 148, 31, 0);
    tail_fn_00a2a620(&g_tail_00a2a620);
}