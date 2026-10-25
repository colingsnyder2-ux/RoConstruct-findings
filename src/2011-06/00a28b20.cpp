// from server: 100% by colin
// roc 2011-06 00a28b20  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28b20
//
// 00a28b20  6a00                 push 0
// 00a28b22  6a02                 push 2
// 00a28b24  6854020000           push 0x254
// 00a28b29  688064a900           push 0xa96480
// 00a28b2e  682040aa00           push 0xaa4020
// 00a28b33  b91004cd00           mov ecx, 0xcd0410
// 00a28b38  e8632cc8ff           call 0x6ab7a0
// 00a28b3d  6860c3a300           push 0xa3c360
// 00a28b42  e81626deff           call 0x80b15d
// 00a28b47  59                   pop ecx
// 00a28b48  c3                   ret 

extern int g_00a28b20_0;
extern int g_00a28b20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28b20(void*);
struct O_00a28b20 { int m(void*, void*, int, int, int); };
extern O_00a28b20 g_obj_00a28b20;
extern int g_tail_00a28b20;
void func_00a28b20()
{
    g_obj_00a28b20.m((void*)&g_00a28b20_0, (void*)&g_00a28b20_1, 596, 2, 0);
    tail_fn_00a28b20(&g_tail_00a28b20);
}