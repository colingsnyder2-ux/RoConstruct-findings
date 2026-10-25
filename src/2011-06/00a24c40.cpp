// from server: 100% by colin
// roc 2011-06 00a24c40  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24c40
//
// 00a24c40  6a00                 push 0
// 00a24c42  6a1f                 push 0x1f
// 00a24c44  68a0000000           push 0xa0
// 00a24c49  686862a600           push 0xa66268
// 00a24c4e  68d8b5a900           push 0xa9b5d8
// 00a24c53  b900dacc00           mov ecx, 0xccda00
// 00a24c58  e86396c3ff           call 0x65e2c0
// 00a24c5d  6830ada300           push 0xa3ad30
// 00a24c62  e8f664deff           call 0x80b15d
// 00a24c67  59                   pop ecx
// 00a24c68  c3                   ret 

extern int g_00a24c40_0;
extern int g_00a24c40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24c40(void*);
struct O_00a24c40 { int m(void*, void*, int, int, int); };
extern O_00a24c40 g_obj_00a24c40;
extern int g_tail_00a24c40;
void func_00a24c40()
{
    g_obj_00a24c40.m((void*)&g_00a24c40_0, (void*)&g_00a24c40_1, 160, 31, 0);
    tail_fn_00a24c40(&g_tail_00a24c40);
}