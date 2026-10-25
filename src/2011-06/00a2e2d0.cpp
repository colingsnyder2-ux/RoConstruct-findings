// from server: 100% by colin
// roc 2011-06 00a2e2d0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2e2d0
//
// 00a2e2d0  6a02                 push 2
// 00a2e2d2  687c43ab00           push 0xab437c
// 00a2e2d7  688c84a700           push 0xa7848c
// 00a2e2dc  687043ab00           push 0xab4370
// 00a2e2e1  6898000000           push 0x98
// 00a2e2e6  b9b84acd00           mov ecx, 0xcd4ab8
// 00a2e2eb  e870cbd0ff           call 0x73ae60
// 00a2e2f0  68b0f2a300           push 0xa3f2b0
// 00a2e2f5  e863ceddff           call 0x80b15d
// 00a2e2fa  59                   pop ecx
// 00a2e2fb  c3                   ret 

extern int g_00a2e2d0_1;
extern int g_00a2e2d0_2;
extern int g_00a2e2d0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2e2d0(void*);
struct O_00a2e2d0 { int m(int, void*, void*, void*, int); };
extern O_00a2e2d0 g_obj_00a2e2d0;
extern int g_tail_00a2e2d0;
void func_00a2e2d0()
{
    g_obj_00a2e2d0.m(152, (void*)&g_00a2e2d0_1, (void*)&g_00a2e2d0_2, (void*)&g_00a2e2d0_3, 2);
    tail_fn_00a2e2d0(&g_tail_00a2e2d0);
}