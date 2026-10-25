// from server: 100% by colin
// roc 2011-06 00a16130  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a16130
//
// 00a16130  6a00                 push 0
// 00a16132  6a1f                 push 0x1f
// 00a16134  68b0000000           push 0xb0
// 00a16139  68fcc8a600           push 0xa6c8fc
// 00a1613e  6828c9a600           push 0xa6c928
// 00a16143  b9082acb00           mov ecx, 0xcb2a08
// 00a16148  e803ada3ff           call 0x450e50
// 00a1614d  682010a300           push 0xa31020
// 00a16152  e80650dfff           call 0x80b15d
// 00a16157  59                   pop ecx
// 00a16158  c3                   ret 

extern int g_00a16130_0;
extern int g_00a16130_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a16130(void*);
struct O_00a16130 { int m(void*, void*, int, int, int); };
extern O_00a16130 g_obj_00a16130;
extern int g_tail_00a16130;
void func_00a16130()
{
    g_obj_00a16130.m((void*)&g_00a16130_0, (void*)&g_00a16130_1, 176, 31, 0);
    tail_fn_00a16130(&g_tail_00a16130);
}