// from server: 100% by colin
// roc 2011-06 00a1c880  unit: seg_00a10000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c880
//
// 00a1c880  6a00                 push 0
// 00a1c882  684ca1a800           push 0xa8a14c
// 00a1c887  68b8a1a800           push 0xa8a1b8
// 00a1c88c  6a7c                 push 0x7c
// 00a1c88e  b9e0bdcb00           mov ecx, 0xcbbde0
// 00a1c893  e8389bb7ff           call 0x5963d0
// 00a1c898  68f04fa300           push 0xa34ff0
// 00a1c89d  e8bbe8deff           call 0x80b15d
// 00a1c8a2  59                   pop ecx
// 00a1c8a3  c3                   ret 

extern int g_00a1c880_1;
extern int g_00a1c880_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c880(void*);
struct O_00a1c880 { int m(int, void*, void*, int); };
extern O_00a1c880 g_obj_00a1c880;
extern int g_tail_00a1c880;
void func_00a1c880()
{
    g_obj_00a1c880.m(124, (void*)&g_00a1c880_1, (void*)&g_00a1c880_2, 0);
    tail_fn_00a1c880(&g_tail_00a1c880);
}