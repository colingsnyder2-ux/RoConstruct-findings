// from server: 100% by colin
// roc 2011-06 00a16830  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16830
//
// 00a16830  6a00                 push 0
// 00a16832  6a1f                 push 0x1f
// 00a16834  683c010000           push 0x13c
// 00a16839  6858d4a600           push 0xa6d458
// 00a1683e  68a4d4a600           push 0xa6d4a4
// 00a16843  b96832cb00           mov ecx, 0xcb3268
// 00a16848  e893dfa3ff           call 0x4547e0
// 00a1684d  68e013a300           push 0xa313e0
// 00a16852  e80649dfff           call 0x80b15d
// 00a16857  59                   pop ecx
// 00a16858  c3                   ret 

extern int g_00a16830_0;
extern int g_00a16830_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a16830(void*);
struct O_00a16830 { int m(void*, void*, int, int, int); };
extern O_00a16830 g_obj_00a16830;
extern int g_tail_00a16830;
void func_00a16830()
{
    g_obj_00a16830.m((void*)&g_00a16830_0, (void*)&g_00a16830_1, 316, 31, 0);
    tail_fn_00a16830(&g_tail_00a16830);
}