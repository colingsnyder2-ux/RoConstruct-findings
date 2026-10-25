// from server: 100% by colin
// roc 2011-06 00a17cc0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17cc0
//
// 00a17cc0  6a02                 push 2
// 00a17cc2  6a02                 push 2
// 00a17cc4  68d8000000           push 0xd8
// 00a17cc9  68e483a700           push 0xa783e4
// 00a17cce  684c86a700           push 0xa7864c
// 00a17cd3  b9305ccb00           mov ecx, 0xcb5c30
// 00a17cd8  e86362a9ff           call 0x4adf40
// 00a17cdd  68e022a300           push 0xa322e0
// 00a17ce2  e87634dfff           call 0x80b15d
// 00a17ce7  59                   pop ecx
// 00a17ce8  c3                   ret 

extern int g_00a17cc0_0;
extern int g_00a17cc0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17cc0(void*);
struct O_00a17cc0 { int m(void*, void*, int, int, int); };
extern O_00a17cc0 g_obj_00a17cc0;
extern int g_tail_00a17cc0;
void func_00a17cc0()
{
    g_obj_00a17cc0.m((void*)&g_00a17cc0_0, (void*)&g_00a17cc0_1, 216, 2, 2);
    tail_fn_00a17cc0(&g_tail_00a17cc0);
}