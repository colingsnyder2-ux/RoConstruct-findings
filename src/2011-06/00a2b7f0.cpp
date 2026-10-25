// from server: 100% by colin
// roc 2011-06 00a2b7f0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b7f0
//
// 00a2b7f0  6a00                 push 0
// 00a2b7f2  6a1f                 push 0x1f
// 00a2b7f4  688c010000           push 0x18c
// 00a2b7f9  68e0d2aa00           push 0xaad2e0
// 00a2b7fe  68e8d2aa00           push 0xaad2e8
// 00a2b803  b9982bcd00           mov ecx, 0xcd2b98
// 00a2b808  e8836fcdff           call 0x702790
// 00a2b80d  6820dca300           push 0xa3dc20
// 00a2b812  e846f9ddff           call 0x80b15d
// 00a2b817  59                   pop ecx
// 00a2b818  c3                   ret 

extern int g_00a2b7f0_0;
extern int g_00a2b7f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b7f0(void*);
struct O_00a2b7f0 { int m(void*, void*, int, int, int); };
extern O_00a2b7f0 g_obj_00a2b7f0;
extern int g_tail_00a2b7f0;
void func_00a2b7f0()
{
    g_obj_00a2b7f0.m((void*)&g_00a2b7f0_0, (void*)&g_00a2b7f0_1, 396, 31, 0);
    tail_fn_00a2b7f0(&g_tail_00a2b7f0);
}