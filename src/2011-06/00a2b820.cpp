// from server: 100% by colin
// roc 2011-06 00a2b820  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b820
//
// 00a2b820  6a00                 push 0
// 00a2b822  6a1f                 push 0x1f
// 00a2b824  6890010000           push 0x190
// 00a2b829  68e0d2aa00           push 0xaad2e0
// 00a2b82e  68f0d2aa00           push 0xaad2f0
// 00a2b833  b9182ccd00           mov ecx, 0xcd2c18
// 00a2b838  e82370cdff           call 0x702860
// 00a2b83d  6860dca300           push 0xa3dc60
// 00a2b842  e816f9ddff           call 0x80b15d
// 00a2b847  59                   pop ecx
// 00a2b848  c3                   ret 

extern int g_00a2b820_0;
extern int g_00a2b820_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b820(void*);
struct O_00a2b820 { int m(void*, void*, int, int, int); };
extern O_00a2b820 g_obj_00a2b820;
extern int g_tail_00a2b820;
void func_00a2b820()
{
    g_obj_00a2b820.m((void*)&g_00a2b820_0, (void*)&g_00a2b820_1, 400, 31, 0);
    tail_fn_00a2b820(&g_tail_00a2b820);
}