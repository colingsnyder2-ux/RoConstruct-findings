// from server: 100% by colin
// roc 2011-06 00a27c60  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27c60
//
// 00a27c60  6a00                 push 0
// 00a27c62  689c84a700           push 0xa7849c
// 00a27c67  68f4a1a800           push 0xa8a1f4
// 00a27c6c  68ac000000           push 0xac
// 00a27c71  b9c8facc00           mov ecx, 0xccfac8
// 00a27c76  e8d513c7ff           call 0x699050
// 00a27c7b  68c0c1a300           push 0xa3c1c0
// 00a27c80  e8d834deff           call 0x80b15d
// 00a27c85  59                   pop ecx
// 00a27c86  c3                   ret 

extern int g_00a27c60_1;
extern int g_00a27c60_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27c60(void*);
struct O_00a27c60 { int m(int, void*, void*, int); };
extern O_00a27c60 g_obj_00a27c60;
extern int g_tail_00a27c60;
void func_00a27c60()
{
    g_obj_00a27c60.m(172, (void*)&g_00a27c60_1, (void*)&g_00a27c60_2, 0);
    tail_fn_00a27c60(&g_tail_00a27c60);
}