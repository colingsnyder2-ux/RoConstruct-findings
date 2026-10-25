// from server: 100% by colin
// roc 2011-06 00a2d2e0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d2e0
//
// 00a2d2e0  6a1f                 push 0x1f
// 00a2d2e2  6840ea7500           push 0x75ea40
// 00a2d2e7  68d0e87500           push 0x75e8d0
// 00a2d2ec  687821ab00           push 0xab2178
// 00a2d2f1  68f021ab00           push 0xab21f0
// 00a2d2f6  b94c3fcd00           mov ecx, 0xcd3f4c
// 00a2d2fb  e8902ccfff           call 0x71ff90
// 00a2d300  6860eaa300           push 0xa3ea60
// 00a2d305  e853deddff           call 0x80b15d
// 00a2d30a  59                   pop ecx
// 00a2d30b  c3                   ret 

extern int g_00a2d2e0_0;
extern int g_00a2d2e0_1;
extern int g_00a2d2e0_2;
extern int g_00a2d2e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d2e0(void*);
struct O_00a2d2e0 { int m(void*, void*, void*, void*, int); };
extern O_00a2d2e0 g_obj_00a2d2e0;
extern int g_tail_00a2d2e0;
void func_00a2d2e0()
{
    g_obj_00a2d2e0.m((void*)&g_00a2d2e0_0, (void*)&g_00a2d2e0_1, (void*)&g_00a2d2e0_2, (void*)&g_00a2d2e0_3, 31);
    tail_fn_00a2d2e0(&g_tail_00a2d2e0);
}