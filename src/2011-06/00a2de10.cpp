// from server: 100% by colin
// roc 2011-06 00a2de10  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2de10
//
// 00a2de10  6a00                 push 0
// 00a2de12  68f02ba900           push 0xa92bf0
// 00a2de17  68903aab00           push 0xab3a90
// 00a2de1c  6800010000           push 0x100
// 00a2de21  b92046cd00           mov ecx, 0xcd4620
// 00a2de26  e8453fd0ff           call 0x731d70
// 00a2de2b  6840f0a300           push 0xa3f040
// 00a2de30  e828d3ddff           call 0x80b15d
// 00a2de35  59                   pop ecx
// 00a2de36  c3                   ret 

extern int g_00a2de10_1;
extern int g_00a2de10_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2de10(void*);
struct O_00a2de10 { int m(int, void*, void*, int); };
extern O_00a2de10 g_obj_00a2de10;
extern int g_tail_00a2de10;
void func_00a2de10()
{
    g_obj_00a2de10.m(256, (void*)&g_00a2de10_1, (void*)&g_00a2de10_2, 0);
    tail_fn_00a2de10(&g_tail_00a2de10);
}