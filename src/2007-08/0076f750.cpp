// from server: 100% by colin
// roc 2007-08 0076f750  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f750
//
// 0076f750  6a05                 push 5
// 0076f752  6800010000           push 0x100
// 0076f757  6870d17900           push 0x79d170
// 0076f75c  688cd17900           push 0x79d18c
// 0076f761  b994e88b00           mov ecx, 0x8be894
// 0076f766  e83550d3ff           call 0x4a47a0
// 0076f76b  68f0887700           push 0x7788f0
// 0076f770  e8ae15ecff           call 0x630d23
// 0076f775  59                   pop ecx
// 0076f776  c3                   ret 

extern int g_0076f750_0;
extern int g_0076f750_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f750(void*);
struct O_0076f750 { int m(void*, void*, int, int); };
extern O_0076f750 g_obj_0076f750;
extern int g_tail_0076f750;
void func_0076f750()
{
    g_obj_0076f750.m((void*)&g_0076f750_0, (void*)&g_0076f750_1, 256, 5);
    tail_fn_0076f750(&g_tail_0076f750);
}