// from server: 100% by colin
// roc 2011-06 00a2b7c0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b7c0
//
// 00a2b7c0  6a00                 push 0
// 00a2b7c2  6a1f                 push 0x1f
// 00a2b7c4  6888010000           push 0x188
// 00a2b7c9  68e0d2aa00           push 0xaad2e0
// 00a2b7ce  68d8d2aa00           push 0xaad2d8
// 00a2b7d3  b9202ecd00           mov ecx, 0xcd2e20
// 00a2b7d8  e8b36fcdff           call 0x702790
// 00a2b7dd  6800dca300           push 0xa3dc00
// 00a2b7e2  e876f9ddff           call 0x80b15d
// 00a2b7e7  59                   pop ecx
// 00a2b7e8  c3                   ret 

extern int g_00a2b7c0_0;
extern int g_00a2b7c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b7c0(void*);
struct O_00a2b7c0 { int m(void*, void*, int, int, int); };
extern O_00a2b7c0 g_obj_00a2b7c0;
extern int g_tail_00a2b7c0;
void func_00a2b7c0()
{
    g_obj_00a2b7c0.m((void*)&g_00a2b7c0_0, (void*)&g_00a2b7c0_1, 392, 31, 0);
    tail_fn_00a2b7c0(&g_tail_00a2b7c0);
}