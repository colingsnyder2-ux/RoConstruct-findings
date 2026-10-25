// from server: 100% by colin
// roc 2011-06 00a18910  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18910
//
// 00a18910  6a03                 push 3
// 00a18912  683484a700           push 0xa78434
// 00a18917  68d095a700           push 0xa795d0
// 00a1891c  6800020000           push 0x200
// 00a18921  b9e469cb00           mov ecx, 0xcb69e4
// 00a18926  e875cbabff           call 0x4d54a0
// 00a1892b  68802fa300           push 0xa32f80
// 00a18930  e82828dfff           call 0x80b15d
// 00a18935  59                   pop ecx
// 00a18936  c3                   ret 

extern int g_00a18910_1;
extern int g_00a18910_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a18910(void*);
struct O_00a18910 { int m(int, void*, void*, int); };
extern O_00a18910 g_obj_00a18910;
extern int g_tail_00a18910;
void func_00a18910()
{
    g_obj_00a18910.m(512, (void*)&g_00a18910_1, (void*)&g_00a18910_2, 3);
    tail_fn_00a18910(&g_tail_00a18910);
}