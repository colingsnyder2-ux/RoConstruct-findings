// from server: 100% by colin
// roc 2011-06 00a2b030  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b030
//
// 00a2b030  6a00                 push 0
// 00a2b032  6a1f                 push 0x1f
// 00a2b034  68b0000000           push 0xb0
// 00a2b039  686862a600           push 0xa66268
// 00a2b03e  68eca2aa00           push 0xaaa2ec
// 00a2b043  b9c025cd00           mov ecx, 0xcd25c0
// 00a2b048  e813bcccff           call 0x6f6c60
// 00a2b04d  68a0d8a300           push 0xa3d8a0
// 00a2b052  e80601deff           call 0x80b15d
// 00a2b057  59                   pop ecx
// 00a2b058  c3                   ret 

extern int g_00a2b030_0;
extern int g_00a2b030_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b030(void*);
struct O_00a2b030 { int m(void*, void*, int, int, int); };
extern O_00a2b030 g_obj_00a2b030;
extern int g_tail_00a2b030;
void func_00a2b030()
{
    g_obj_00a2b030.m((void*)&g_00a2b030_0, (void*)&g_00a2b030_1, 176, 31, 0);
    tail_fn_00a2b030(&g_tail_00a2b030);
}