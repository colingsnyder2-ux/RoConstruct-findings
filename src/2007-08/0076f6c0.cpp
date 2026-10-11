// from server: 100% by colin
// roc 2007-08 0076f6c0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f6c0
//
// 0076f6c0  6a05                 push 5
// 0076f6c2  680c010000           push 0x10c
// 0076f6c7  6828d17900           push 0x79d128
// 0076f6cc  6844d17900           push 0x79d144
// 0076f6d1  b9ece78b00           mov ecx, 0x8be7ec
// 0076f6d6  e8e54fd3ff           call 0x4a46c0
// 0076f6db  6830887700           push 0x778830
// 0076f6e0  e83e16ecff           call 0x630d23
// 0076f6e5  59                   pop ecx
// 0076f6e6  c3                   ret 

extern int g_0076f6c0_0;
extern int g_0076f6c0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f6c0(void*);
struct O_0076f6c0 { int m(void*, void*, int, int); };
extern O_0076f6c0 g_obj_0076f6c0;
extern int g_tail_0076f6c0;
void func_0076f6c0()
{
    g_obj_0076f6c0.m((void*)&g_0076f6c0_0, (void*)&g_0076f6c0_1, 268, 5);
    tail_fn_0076f6c0(&g_tail_0076f6c0);
}