// from server: 100% by colin
// roc 2011-06 00a191d0  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a191d0
//
// 00a191d0  6a00                 push 0
// 00a191d2  68389ea700           push 0xa79e38
// 00a191d7  68309ea700           push 0xa79e30
// 00a191dc  681c9ea700           push 0xa79e1c
// 00a191e1  6840010000           push 0x140
// 00a191e6  b9007acb00           mov ecx, 0xcb7a00
// 00a191eb  e8207eacff           call 0x4e1010
// 00a191f0  680035a300           push 0xa33500
// 00a191f5  e8631fdfff           call 0x80b15d
// 00a191fa  59                   pop ecx
// 00a191fb  c3                   ret 

extern int g_00a191d0_1;
extern int g_00a191d0_2;
extern int g_00a191d0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a191d0(void*);
struct O_00a191d0 { int m(int, void*, void*, void*, int); };
extern O_00a191d0 g_obj_00a191d0;
extern int g_tail_00a191d0;
void func_00a191d0()
{
    g_obj_00a191d0.m(320, (void*)&g_00a191d0_1, (void*)&g_00a191d0_2, (void*)&g_00a191d0_3, 0);
    tail_fn_00a191d0(&g_tail_00a191d0);
}