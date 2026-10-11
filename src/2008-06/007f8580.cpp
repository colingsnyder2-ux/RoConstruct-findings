// from server: 100% by colin
// roc 2008-06 007f8580  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8580
//
// 007f8580  6a05                 push 5
// 007f8582  6854010000           push 0x154
// 007f8587  68b8818400           push 0x8481b8
// 007f858c  683c108300           push 0x83103c
// 007f8591  b9b0c89700           mov ecx, 0x97c8b0
// 007f8596  e81599e3ff           call 0x631eb0
// 007f859b  6870078000           push 0x800770
// 007f85a0  e80a92eaff           call 0x6a17af
// 007f85a5  59                   pop ecx
// 007f85a6  c3                   ret 

extern int g_007f8580_0;
extern int g_007f8580_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8580(void*);
struct O_007f8580 { int m(void*, void*, int, int); };
extern O_007f8580 g_obj_007f8580;
extern int g_tail_007f8580;
void func_007f8580()
{
    g_obj_007f8580.m((void*)&g_007f8580_0, (void*)&g_007f8580_1, 340, 5);
    tail_fn_007f8580(&g_tail_007f8580);
}