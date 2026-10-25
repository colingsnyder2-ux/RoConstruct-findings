// from server: 100% by colin
// roc 2011-06 00a24330  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24330
//
// 00a24330  6a00                 push 0
// 00a24332  6a1f                 push 0x1f
// 00a24334  68a2000000           push 0xa2
// 00a24339  683819a700           push 0xa71938
// 00a2433e  68a493a900           push 0xa993a4
// 00a24343  b9d8cfcc00           mov ecx, 0xcccfd8
// 00a24348  e86357c2ff           call 0x649ab0
// 00a2434d  68d0a7a300           push 0xa3a7d0
// 00a24352  e8066edeff           call 0x80b15d
// 00a24357  59                   pop ecx
// 00a24358  c3                   ret 

extern int g_00a24330_0;
extern int g_00a24330_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24330(void*);
struct O_00a24330 { int m(void*, void*, int, int, int); };
extern O_00a24330 g_obj_00a24330;
extern int g_tail_00a24330;
void func_00a24330()
{
    g_obj_00a24330.m((void*)&g_00a24330_0, (void*)&g_00a24330_1, 162, 31, 0);
    tail_fn_00a24330(&g_tail_00a24330);
}