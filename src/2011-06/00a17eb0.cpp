// from server: 100% by colin
// roc 2011-06 00a17eb0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17eb0
//
// 00a17eb0  6a00                 push 0
// 00a17eb2  6a02                 push 2
// 00a17eb4  6868010000           push 0x168
// 00a17eb9  68e483a700           push 0xa783e4
// 00a17ebe  68b486a700           push 0xa786b4
// 00a17ec3  b9e05acb00           mov ecx, 0xcb5ae0
// 00a17ec8  e8f361a9ff           call 0x4ae0c0
// 00a17ecd  68c023a300           push 0xa323c0
// 00a17ed2  e88632dfff           call 0x80b15d
// 00a17ed7  59                   pop ecx
// 00a17ed8  c3                   ret 

extern int g_00a17eb0_0;
extern int g_00a17eb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17eb0(void*);
struct O_00a17eb0 { int m(void*, void*, int, int, int); };
extern O_00a17eb0 g_obj_00a17eb0;
extern int g_tail_00a17eb0;
void func_00a17eb0()
{
    g_obj_00a17eb0.m((void*)&g_00a17eb0_0, (void*)&g_00a17eb0_1, 360, 2, 0);
    tail_fn_00a17eb0(&g_tail_00a17eb0);
}