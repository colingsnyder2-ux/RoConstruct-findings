// from server: 100% by colin
// roc 2011-06 00a24d10  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24d10
//
// 00a24d10  6a00                 push 0
// 00a24d12  6a1f                 push 0x1f
// 00a24d14  68c0000000           push 0xc0
// 00a24d19  68e483a700           push 0xa783e4
// 00a24d1e  6838b9a900           push 0xa9b938
// 00a24d23  b9f4dacc00           mov ecx, 0xccdaf4
// 00a24d28  e8c3a7c3ff           call 0x65f4f0
// 00a24d2d  68b0ada300           push 0xa3adb0
// 00a24d32  e82664deff           call 0x80b15d
// 00a24d37  59                   pop ecx
// 00a24d38  c3                   ret 

extern int g_00a24d10_0;
extern int g_00a24d10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24d10(void*);
struct O_00a24d10 { int m(void*, void*, int, int, int); };
extern O_00a24d10 g_obj_00a24d10;
extern int g_tail_00a24d10;
void func_00a24d10()
{
    g_obj_00a24d10.m((void*)&g_00a24d10_0, (void*)&g_00a24d10_1, 192, 31, 0);
    tail_fn_00a24d10(&g_tail_00a24d10);
}