// from server: 100% by colin
// roc 2011-06 00a2c360  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c360
//
// 00a2c360  6a00                 push 0
// 00a2c362  6a1f                 push 0x1f
// 00a2c364  68f0000000           push 0xf0
// 00a2c369  68fc6ba900           push 0xa96bfc
// 00a2c36e  68b4e4aa00           push 0xaae4b4
// 00a2c373  b95c33cd00           mov ecx, 0xcd335c
// 00a2c378  e80307ceff           call 0x70ca80
// 00a2c37d  68d0e2a300           push 0xa3e2d0
// 00a2c382  e8d6edddff           call 0x80b15d
// 00a2c387  59                   pop ecx
// 00a2c388  c3                   ret 

extern int g_00a2c360_0;
extern int g_00a2c360_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c360(void*);
struct O_00a2c360 { int m(void*, void*, int, int, int); };
extern O_00a2c360 g_obj_00a2c360;
extern int g_tail_00a2c360;
void func_00a2c360()
{
    g_obj_00a2c360.m((void*)&g_00a2c360_0, (void*)&g_00a2c360_1, 240, 31, 0);
    tail_fn_00a2c360(&g_tail_00a2c360);
}