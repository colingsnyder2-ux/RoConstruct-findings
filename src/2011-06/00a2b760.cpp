// from server: 100% by colin
// roc 2011-06 00a2b760  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b760
//
// 00a2b760  6a00                 push 0
// 00a2b762  6a1f                 push 0x1f
// 00a2b764  687c010000           push 0x17c
// 00a2b769  68b4d2aa00           push 0xaad2b4
// 00a2b76e  68c8d2aa00           push 0xaad2c8
// 00a2b773  b9202dcd00           mov ecx, 0xcd2d20
// 00a2b778  e81370cdff           call 0x702790
// 00a2b77d  68c0dba300           push 0xa3dbc0
// 00a2b782  e8d6f9ddff           call 0x80b15d
// 00a2b787  59                   pop ecx
// 00a2b788  c3                   ret 

extern int g_00a2b760_0;
extern int g_00a2b760_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b760(void*);
struct O_00a2b760 { int m(void*, void*, int, int, int); };
extern O_00a2b760 g_obj_00a2b760;
extern int g_tail_00a2b760;
void func_00a2b760()
{
    g_obj_00a2b760.m((void*)&g_00a2b760_0, (void*)&g_00a2b760_1, 380, 31, 0);
    tail_fn_00a2b760(&g_tail_00a2b760);
}