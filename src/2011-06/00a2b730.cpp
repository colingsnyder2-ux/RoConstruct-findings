// from server: 100% by colin
// roc 2011-06 00a2b730  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b730
//
// 00a2b730  6a00                 push 0
// 00a2b732  6a1f                 push 0x1f
// 00a2b734  6878010000           push 0x178
// 00a2b739  68b4d2aa00           push 0xaad2b4
// 00a2b73e  68bcd2aa00           push 0xaad2bc
// 00a2b743  b9182bcd00           mov ecx, 0xcd2b18
// 00a2b748  e84370cdff           call 0x702790
// 00a2b74d  68a0dba300           push 0xa3dba0
// 00a2b752  e806faddff           call 0x80b15d
// 00a2b757  59                   pop ecx
// 00a2b758  c3                   ret 

extern int g_00a2b730_0;
extern int g_00a2b730_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b730(void*);
struct O_00a2b730 { int m(void*, void*, int, int, int); };
extern O_00a2b730 g_obj_00a2b730;
extern int g_tail_00a2b730;
void func_00a2b730()
{
    g_obj_00a2b730.m((void*)&g_00a2b730_0, (void*)&g_00a2b730_1, 376, 31, 0);
    tail_fn_00a2b730(&g_tail_00a2b730);
}