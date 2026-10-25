// from server: 100% by colin
// roc 2011-06 00a243f0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a243f0
//
// 00a243f0  6a00                 push 0
// 00a243f2  6a1f                 push 0x1f
// 00a243f4  68b0000000           push 0xb0
// 00a243f9  685093a900           push 0xa99350
// 00a243fe  680094a900           push 0xa99400
// 00a24403  b938d0cc00           mov ecx, 0xccd038
// 00a24408  e87357c2ff           call 0x649b80
// 00a2440d  6830a8a300           push 0xa3a830
// 00a24412  e8466ddeff           call 0x80b15d
// 00a24417  59                   pop ecx
// 00a24418  c3                   ret 

extern int g_00a243f0_0;
extern int g_00a243f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a243f0(void*);
struct O_00a243f0 { int m(void*, void*, int, int, int); };
extern O_00a243f0 g_obj_00a243f0;
extern int g_tail_00a243f0;
void func_00a243f0()
{
    g_obj_00a243f0.m((void*)&g_00a243f0_0, (void*)&g_00a243f0_1, 176, 31, 0);
    tail_fn_00a243f0(&g_tail_00a243f0);
}