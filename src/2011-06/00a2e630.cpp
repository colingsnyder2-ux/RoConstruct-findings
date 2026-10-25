// from server: 100% by colin
// roc 2011-06 00a2e630  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2e630
//
// 00a2e630  6a00                 push 0
// 00a2e632  68304aab00           push 0xab4a30
// 00a2e637  68204aab00           push 0xab4a20
// 00a2e63c  68a8000000           push 0xa8
// 00a2e641  b9804dcd00           mov ecx, 0xcd4d80
// 00a2e646  e8f51cd1ff           call 0x740340
// 00a2e64b  6850f3a300           push 0xa3f350
// 00a2e650  e808cbddff           call 0x80b15d
// 00a2e655  59                   pop ecx
// 00a2e656  c3                   ret 

extern int g_00a2e630_1;
extern int g_00a2e630_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2e630(void*);
struct O_00a2e630 { int m(int, void*, void*, int); };
extern O_00a2e630 g_obj_00a2e630;
extern int g_tail_00a2e630;
void func_00a2e630()
{
    g_obj_00a2e630.m(168, (void*)&g_00a2e630_1, (void*)&g_00a2e630_2, 0);
    tail_fn_00a2e630(&g_tail_00a2e630);
}