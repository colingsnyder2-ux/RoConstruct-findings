// from server: 100% by colin
// roc 2011-06 00a17f70  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17f70
//
// 00a17f70  6a00                 push 0
// 00a17f72  681c87a700           push 0xa7871c
// 00a17f77  681487a700           push 0xa78714
// 00a17f7c  6854010000           push 0x154
// 00a17f81  b9405acb00           mov ecx, 0xcb5a40
// 00a17f86  e89512aaff           call 0x4b9220
// 00a17f8b  68c026a300           push 0xa326c0
// 00a17f90  e8c831dfff           call 0x80b15d
// 00a17f95  59                   pop ecx
// 00a17f96  c3                   ret 

extern int g_00a17f70_1;
extern int g_00a17f70_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17f70(void*);
struct O_00a17f70 { int m(int, void*, void*, int); };
extern O_00a17f70 g_obj_00a17f70;
extern int g_tail_00a17f70;
void func_00a17f70()
{
    g_obj_00a17f70.m(340, (void*)&g_00a17f70_1, (void*)&g_00a17f70_2, 0);
    tail_fn_00a17f70(&g_tail_00a17f70);
}