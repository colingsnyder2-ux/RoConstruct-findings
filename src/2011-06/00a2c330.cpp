// from server: 100% by colin
// roc 2011-06 00a2c330  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c330
//
// 00a2c330  6a00                 push 0
// 00a2c332  6a1f                 push 0x1f
// 00a2c334  68d0000000           push 0xd0
// 00a2c339  68fc6ba900           push 0xa96bfc
// 00a2c33e  68a8e4aa00           push 0xaae4a8
// 00a2c343  b9dc33cd00           mov ecx, 0xcd33dc
// 00a2c348  e83307ceff           call 0x70ca80
// 00a2c34d  68b0e2a300           push 0xa3e2b0
// 00a2c352  e806eeddff           call 0x80b15d
// 00a2c357  59                   pop ecx
// 00a2c358  c3                   ret 

extern int g_00a2c330_0;
extern int g_00a2c330_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c330(void*);
struct O_00a2c330 { int m(void*, void*, int, int, int); };
extern O_00a2c330 g_obj_00a2c330;
extern int g_tail_00a2c330;
void func_00a2c330()
{
    g_obj_00a2c330.m((void*)&g_00a2c330_0, (void*)&g_00a2c330_1, 208, 31, 0);
    tail_fn_00a2c330(&g_tail_00a2c330);
}