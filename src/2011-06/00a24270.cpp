// from server: 100% by colin
// roc 2011-06 00a24270  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24270
//
// 00a24270  6a00                 push 0
// 00a24272  6a1f                 push 0x1f
// 00a24274  6898000000           push 0x98
// 00a24279  685093a900           push 0xa99350
// 00a2427e  685893a900           push 0xa99358
// 00a24283  b9bccecc00           mov ecx, 0xcccebc
// 00a24288  e85357c2ff           call 0x6499e0
// 00a2428d  68b0a8a300           push 0xa3a8b0
// 00a24292  e8c66edeff           call 0x80b15d
// 00a24297  59                   pop ecx
// 00a24298  c3                   ret 

extern int g_00a24270_0;
extern int g_00a24270_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24270(void*);
struct O_00a24270 { int m(void*, void*, int, int, int); };
extern O_00a24270 g_obj_00a24270;
extern int g_tail_00a24270;
void func_00a24270()
{
    g_obj_00a24270.m((void*)&g_00a24270_0, (void*)&g_00a24270_1, 152, 31, 0);
    tail_fn_00a24270(&g_tail_00a24270);
}