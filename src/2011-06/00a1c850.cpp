// from server: 100% by colin
// roc 2011-06 00a1c850  unit: seg_00a10000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c850
//
// 00a1c850  6a00                 push 0
// 00a1c852  68a0a1a800           push 0xa8a1a0
// 00a1c857  68a8a1a800           push 0xa8a1a8
// 00a1c85c  6a78                 push 0x78
// 00a1c85e  b964becb00           mov ecx, 0xcbbe64
// 00a1c863  e8689bb7ff           call 0x5963d0
// 00a1c868  68e04fa300           push 0xa34fe0
// 00a1c86d  e8ebe8deff           call 0x80b15d
// 00a1c872  59                   pop ecx
// 00a1c873  c3                   ret 

extern int g_00a1c850_1;
extern int g_00a1c850_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c850(void*);
struct O_00a1c850 { int m(int, void*, void*, int); };
extern O_00a1c850 g_obj_00a1c850;
extern int g_tail_00a1c850;
void func_00a1c850()
{
    g_obj_00a1c850.m(120, (void*)&g_00a1c850_1, (void*)&g_00a1c850_2, 0);
    tail_fn_00a1c850(&g_tail_00a1c850);
}