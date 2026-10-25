// from server: 100% by colin
// roc 2011-06 00a19200  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19200
//
// 00a19200  6a00                 push 0
// 00a19202  68309ea700           push 0xa79e30
// 00a19207  68449ea700           push 0xa79e44
// 00a1920c  6848010000           push 0x148
// 00a19211  b9287acb00           mov ecx, 0xcb7a28
// 00a19216  e8357facff           call 0x4e1150
// 00a1921b  68d034a300           push 0xa334d0
// 00a19220  e8381fdfff           call 0x80b15d
// 00a19225  59                   pop ecx
// 00a19226  c3                   ret 

extern int g_00a19200_1;
extern int g_00a19200_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19200(void*);
struct O_00a19200 { int m(int, void*, void*, int); };
extern O_00a19200 g_obj_00a19200;
extern int g_tail_00a19200;
void func_00a19200()
{
    g_obj_00a19200.m(328, (void*)&g_00a19200_1, (void*)&g_00a19200_2, 0);
    tail_fn_00a19200(&g_tail_00a19200);
}