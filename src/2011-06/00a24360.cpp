// from server: 100% by colin
// roc 2011-06 00a24360  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24360
//
// 00a24360  6a00                 push 0
// 00a24362  6a1f                 push 0x1f
// 00a24364  68a4000000           push 0xa4
// 00a24369  683819a700           push 0xa71938
// 00a2436e  68bc93a900           push 0xa993bc
// 00a24373  b994cfcc00           mov ecx, 0xcccf94
// 00a24378  e80358c2ff           call 0x649b80
// 00a2437d  6830a9a300           push 0xa3a930
// 00a24382  e8d66ddeff           call 0x80b15d
// 00a24387  59                   pop ecx
// 00a24388  c3                   ret 

extern int g_00a24360_0;
extern int g_00a24360_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24360(void*);
struct O_00a24360 { int m(void*, void*, int, int, int); };
extern O_00a24360 g_obj_00a24360;
extern int g_tail_00a24360;
void func_00a24360()
{
    g_obj_00a24360.m((void*)&g_00a24360_0, (void*)&g_00a24360_1, 164, 31, 0);
    tail_fn_00a24360(&g_tail_00a24360);
}