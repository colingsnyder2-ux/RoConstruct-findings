// from server: 100% by colin
// roc 2011-06 00a24300  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24300
//
// 00a24300  6a00                 push 0
// 00a24302  6a1f                 push 0x1f
// 00a24304  68a1000000           push 0xa1
// 00a24309  683819a700           push 0xa71938
// 00a2430e  689493a900           push 0xa99394
// 00a24313  b958d0cc00           mov ecx, 0xccd058
// 00a24318  e89357c2ff           call 0x649ab0
// 00a2431d  68f0a8a300           push 0xa3a8f0
// 00a24322  e8366edeff           call 0x80b15d
// 00a24327  59                   pop ecx
// 00a24328  c3                   ret 

extern int g_00a24300_0;
extern int g_00a24300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24300(void*);
struct O_00a24300 { int m(void*, void*, int, int, int); };
extern O_00a24300 g_obj_00a24300;
extern int g_tail_00a24300;
void func_00a24300()
{
    g_obj_00a24300.m((void*)&g_00a24300_0, (void*)&g_00a24300_1, 161, 31, 0);
    tail_fn_00a24300(&g_tail_00a24300);
}