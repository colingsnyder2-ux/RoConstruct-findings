// from server: 100% by colin
// roc 2011-06 00a17f10  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17f10
//
// 00a17f10  6a00                 push 0
// 00a17f12  68f486a700           push 0xa786f4
// 00a17f17  68e486a700           push 0xa786e4
// 00a17f1c  684c010000           push 0x14c
// 00a17f21  b9105fcb00           mov ecx, 0xcb5f10
// 00a17f26  e81512aaff           call 0x4b9140
// 00a17f2b  68b026a300           push 0xa326b0
// 00a17f30  e82832dfff           call 0x80b15d
// 00a17f35  59                   pop ecx
// 00a17f36  c3                   ret 

extern int g_00a17f10_1;
extern int g_00a17f10_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17f10(void*);
struct O_00a17f10 { int m(int, void*, void*, int); };
extern O_00a17f10 g_obj_00a17f10;
extern int g_tail_00a17f10;
void func_00a17f10()
{
    g_obj_00a17f10.m(332, (void*)&g_00a17f10_1, (void*)&g_00a17f10_2, 0);
    tail_fn_00a17f10(&g_tail_00a17f10);
}