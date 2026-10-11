// from server: 100% by colin
// roc 2008-06 007f5450  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5450
//
// 007f5450  6a05                 push 5
// 007f5452  6864010000           push 0x164
// 007f5457  6844d98200           push 0x82d944
// 007f545c  6800848300           push 0x838400
// 007f5461  b92c709700           mov ecx, 0x97702c
// 007f5466  e80569dcff           call 0x5bbd70
// 007f546b  6870e37f00           push 0x7fe370
// 007f5470  e83ac3eaff           call 0x6a17af
// 007f5475  59                   pop ecx
// 007f5476  c3                   ret 

extern int g_007f5450_0;
extern int g_007f5450_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f5450(void*);
struct O_007f5450 { int m(void*, void*, int, int); };
extern O_007f5450 g_obj_007f5450;
extern int g_tail_007f5450;
void func_007f5450()
{
    g_obj_007f5450.m((void*)&g_007f5450_0, (void*)&g_007f5450_1, 356, 5);
    tail_fn_007f5450(&g_tail_007f5450);
}