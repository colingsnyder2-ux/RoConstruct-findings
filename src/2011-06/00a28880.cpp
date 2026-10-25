// from server: 100% by colin
// roc 2011-06 00a28880  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28880
//
// 00a28880  6a00                 push 0
// 00a28882  6a02                 push 2
// 00a28884  685c010000           push 0x15c
// 00a28889  688064a900           push 0xa96480
// 00a2888e  68443faa00           push 0xaa3f44
// 00a28893  b9d800cd00           mov ecx, 0xcd00d8
// 00a28898  e8c32dc8ff           call 0x6ab660
// 00a2889d  6800c3a300           push 0xa3c300
// 00a288a2  e8b628deff           call 0x80b15d
// 00a288a7  59                   pop ecx
// 00a288a8  c3                   ret 

extern int g_00a28880_0;
extern int g_00a28880_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28880(void*);
struct O_00a28880 { int m(void*, void*, int, int, int); };
extern O_00a28880 g_obj_00a28880;
extern int g_tail_00a28880;
void func_00a28880()
{
    g_obj_00a28880.m((void*)&g_00a28880_0, (void*)&g_00a28880_1, 348, 2, 0);
    tail_fn_00a28880(&g_tail_00a28880);
}