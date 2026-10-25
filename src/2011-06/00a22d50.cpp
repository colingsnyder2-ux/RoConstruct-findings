// from server: 100% by colin
// roc 2011-06 00a22d50  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22d50
//
// 00a22d50  6a00                 push 0
// 00a22d52  6a02                 push 2
// 00a22d54  6818020000           push 0x218
// 00a22d59  688064a900           push 0xa96480
// 00a22d5e  689064a900           push 0xa96490
// 00a22d63  b90cc0cc00           mov ecx, 0xccc00c
// 00a22d68  e8a3b4c0ff           call 0x62e210
// 00a22d6d  68e09ca300           push 0xa39ce0
// 00a22d72  e8e683deff           call 0x80b15d
// 00a22d77  59                   pop ecx
// 00a22d78  c3                   ret 

extern int g_00a22d50_0;
extern int g_00a22d50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22d50(void*);
struct O_00a22d50 { int m(void*, void*, int, int, int); };
extern O_00a22d50 g_obj_00a22d50;
extern int g_tail_00a22d50;
void func_00a22d50()
{
    g_obj_00a22d50.m((void*)&g_00a22d50_0, (void*)&g_00a22d50_1, 536, 2, 0);
    tail_fn_00a22d50(&g_tail_00a22d50);
}