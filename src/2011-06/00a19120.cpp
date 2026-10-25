// from server: 100% by colin
// roc 2011-06 00a19120  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19120
//
// 00a19120  6a00                 push 0
// 00a19122  6a1f                 push 0x1f
// 00a19124  6820010000           push 0x120
// 00a19129  68b09da700           push 0xa79db0
// 00a1912e  68a89da700           push 0xa79da8
// 00a19133  b9507acb00           mov ecx, 0xcb7a50
// 00a19138  e8936facff           call 0x4e00d0
// 00a1913d  68a034a300           push 0xa334a0
// 00a19142  e81620dfff           call 0x80b15d
// 00a19147  59                   pop ecx
// 00a19148  c3                   ret 

extern int g_00a19120_0;
extern int g_00a19120_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19120(void*);
struct O_00a19120 { int m(void*, void*, int, int, int); };
extern O_00a19120 g_obj_00a19120;
extern int g_tail_00a19120;
void func_00a19120()
{
    g_obj_00a19120.m((void*)&g_00a19120_0, (void*)&g_00a19120_1, 288, 31, 0);
    tail_fn_00a19120(&g_tail_00a19120);
}