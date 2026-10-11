// from server: 100% by colin
// roc 2007-08 0076f630  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f630
//
// 0076f630  6a05                 push 5
// 0076f632  68f6000000           push 0xf6
// 0076f637  68dcd07900           push 0x79d0dc
// 0076f63c  6808d17900           push 0x79d108
// 0076f641  b978e88b00           mov ecx, 0x8be878
// 0076f646  e8954fd3ff           call 0x4a45e0
// 0076f64b  6810887700           push 0x778810
// 0076f650  e8ce16ecff           call 0x630d23
// 0076f655  59                   pop ecx
// 0076f656  c3                   ret 

extern int g_0076f630_0;
extern int g_0076f630_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f630(void*);
struct O_0076f630 { int m(void*, void*, int, int); };
extern O_0076f630 g_obj_0076f630;
extern int g_tail_0076f630;
void func_0076f630()
{
    g_obj_0076f630.m((void*)&g_0076f630_0, (void*)&g_0076f630_1, 246, 5);
    tail_fn_0076f630(&g_tail_0076f630);
}