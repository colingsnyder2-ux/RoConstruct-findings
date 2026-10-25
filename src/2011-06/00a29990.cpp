// from server: 100% by colin
// roc 2011-06 00a29990  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a29990
//
// 00a29990  6a00                 push 0
// 00a29992  68785aaa00           push 0xaa5a78
// 00a29997  68685aaa00           push 0xaa5a68
// 00a2999c  6800020000           push 0x200
// 00a299a1  b99015cd00           mov ecx, 0xcd1590
// 00a299a6  e8e584caff           call 0x6d1e90
// 00a299ab  6870cea300           push 0xa3ce70
// 00a299b0  e8a817deff           call 0x80b15d
// 00a299b5  59                   pop ecx
// 00a299b6  c3                   ret 

extern int g_00a29990_1;
extern int g_00a29990_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a29990(void*);
struct O_00a29990 { int m(int, void*, void*, int); };
extern O_00a29990 g_obj_00a29990;
extern int g_tail_00a29990;
void func_00a29990()
{
    g_obj_00a29990.m(512, (void*)&g_00a29990_1, (void*)&g_00a29990_2, 0);
    tail_fn_00a29990(&g_tail_00a29990);
}