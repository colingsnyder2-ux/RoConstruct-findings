// from server: 100% by colin
// roc 2011-06 00a22bf0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22bf0
//
// 00a22bf0  6a00                 push 0
// 00a22bf2  681c64a900           push 0xa9641c
// 00a22bf7  681064a900           push 0xa96410
// 00a22bfc  68e8010000           push 0x1e8
// 00a22c01  b93cc1cc00           mov ecx, 0xccc13c
// 00a22c06  e865bdc0ff           call 0x62e970
// 00a22c0b  68c09da300           push 0xa39dc0
// 00a22c10  e84885deff           call 0x80b15d
// 00a22c15  59                   pop ecx
// 00a22c16  c3                   ret 

extern int g_00a22bf0_1;
extern int g_00a22bf0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22bf0(void*);
struct O_00a22bf0 { int m(int, void*, void*, int); };
extern O_00a22bf0 g_obj_00a22bf0;
extern int g_tail_00a22bf0;
void func_00a22bf0()
{
    g_obj_00a22bf0.m(488, (void*)&g_00a22bf0_1, (void*)&g_00a22bf0_2, 0);
    tail_fn_00a22bf0(&g_tail_00a22bf0);
}