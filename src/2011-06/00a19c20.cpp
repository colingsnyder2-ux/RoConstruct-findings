// from server: 100% by colin
// roc 2011-06 00a19c20  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19c20
//
// 00a19c20  6a00                 push 0
// 00a19c22  6834c6a700           push 0xa7c634
// 00a19c27  68309ea700           push 0xa79e30
// 00a19c2c  6824c6a700           push 0xa7c624
// 00a19c31  68001d0000           push 0x1d00
// 00a19c36  b90885cb00           mov ecx, 0xcb8508
// 00a19c3b  e84080aeff           call 0x501c80
// 00a19c40  682040a300           push 0xa34020
// 00a19c45  e81315dfff           call 0x80b15d
// 00a19c4a  59                   pop ecx
// 00a19c4b  c3                   ret 

extern int g_00a19c20_1;
extern int g_00a19c20_2;
extern int g_00a19c20_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19c20(void*);
struct O_00a19c20 { int m(int, void*, void*, void*, int); };
extern O_00a19c20 g_obj_00a19c20;
extern int g_tail_00a19c20;
void func_00a19c20()
{
    g_obj_00a19c20.m(7424, (void*)&g_00a19c20_1, (void*)&g_00a19c20_2, (void*)&g_00a19c20_3, 0);
    tail_fn_00a19c20(&g_tail_00a19c20);
}