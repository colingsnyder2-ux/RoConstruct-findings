// from server: 100% by colin
// roc 2011-06 00a188b0  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a188b0
//
// 00a188b0  6a00                 push 0
// 00a188b2  683484a700           push 0xa78434
// 00a188b7  68b495a700           push 0xa795b4
// 00a188bc  68f8010000           push 0x1f8
// 00a188c1  b9f86acb00           mov ecx, 0xcb6af8
// 00a188c6  e8d5cbabff           call 0x4d54a0
// 00a188cb  68602fa300           push 0xa32f60
// 00a188d0  e88828dfff           call 0x80b15d
// 00a188d5  59                   pop ecx
// 00a188d6  c3                   ret 

extern int g_00a188b0_1;
extern int g_00a188b0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a188b0(void*);
struct O_00a188b0 { int m(int, void*, void*, int); };
extern O_00a188b0 g_obj_00a188b0;
extern int g_tail_00a188b0;
void func_00a188b0()
{
    g_obj_00a188b0.m(504, (void*)&g_00a188b0_1, (void*)&g_00a188b0_2, 0);
    tail_fn_00a188b0(&g_tail_00a188b0);
}