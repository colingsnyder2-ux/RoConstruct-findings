// from server: 100% by colin
// roc 2007-08 0076f690  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f690
//
// 0076f690  6a05                 push 5
// 0076f692  6808010000           push 0x108
// 0076f697  6828d17900           push 0x79d128
// 0076f69c  6834d17900           push 0x79d134
// 0076f6a1  b908e88b00           mov ecx, 0x8be808
// 0076f6a6  e81550d3ff           call 0x4a46c0
// 0076f6ab  68b0887700           push 0x7788b0
// 0076f6b0  e86e16ecff           call 0x630d23
// 0076f6b5  59                   pop ecx
// 0076f6b6  c3                   ret 

extern int g_0076f690_0;
extern int g_0076f690_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f690(void*);
struct O_0076f690 { int m(void*, void*, int, int); };
extern O_0076f690 g_obj_0076f690;
extern int g_tail_0076f690;
void func_0076f690()
{
    g_obj_0076f690.m((void*)&g_0076f690_0, (void*)&g_0076f690_1, 264, 5);
    tail_fn_0076f690(&g_tail_0076f690);
}