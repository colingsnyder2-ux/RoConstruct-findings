// from server: 100% by colin
// roc 2009-06 00884bc0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884bc0
//
// 00884bc0  6a07                 push 7
// 00884bc2  688d000000           push 0x8d
// 00884bc7  680c608b00           push 0x8b600c
// 00884bcc  6818608b00           push 0x8b6018
// 00884bd1  b948a4a300           mov ecx, 0xa3a448
// 00884bd6  e8159bbbff           call 0x43e6f0
// 00884bdb  68d0438900           push 0x8943d0
// 00884be0  e8164fe9ff           call 0x719afb
// 00884be5  59                   pop ecx
// 00884be6  c3                   ret 

extern int g_00884bc0_0;
extern int g_00884bc0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884bc0(void*);
struct O_00884bc0 { int m(void*, void*, int, int); };
extern O_00884bc0 g_obj_00884bc0;
extern int g_tail_00884bc0;
void func_00884bc0()
{
    g_obj_00884bc0.m((void*)&g_00884bc0_0, (void*)&g_00884bc0_1, 141, 7);
    tail_fn_00884bc0(&g_tail_00884bc0);
}