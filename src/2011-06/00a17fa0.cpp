// from server: 100% by colin
// roc 2011-06 00a17fa0  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17fa0
//
// 00a17fa0  6a02                 push 2
// 00a17fa2  683887a700           push 0xa78738
// 00a17fa7  683484a700           push 0xa78434
// 00a17fac  682487a700           push 0xa78724
// 00a17fb1  6858010000           push 0x158
// 00a17fb6  b9d861cb00           mov ecx, 0xcb61d8
// 00a17fbb  e84013aaff           call 0x4b9300
// 00a17fc0  68d026a300           push 0xa326d0
// 00a17fc5  e89331dfff           call 0x80b15d
// 00a17fca  59                   pop ecx
// 00a17fcb  c3                   ret 

extern int g_00a17fa0_1;
extern int g_00a17fa0_2;
extern int g_00a17fa0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17fa0(void*);
struct O_00a17fa0 { int m(int, void*, void*, void*, int); };
extern O_00a17fa0 g_obj_00a17fa0;
extern int g_tail_00a17fa0;
void func_00a17fa0()
{
    g_obj_00a17fa0.m(344, (void*)&g_00a17fa0_1, (void*)&g_00a17fa0_2, (void*)&g_00a17fa0_3, 2);
    tail_fn_00a17fa0(&g_tail_00a17fa0);
}