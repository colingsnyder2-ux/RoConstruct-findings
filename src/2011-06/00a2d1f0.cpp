// from server: 100% by colin
// roc 2011-06 00a2d1f0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d1f0
//
// 00a2d1f0  6a1f                 push 0x1f
// 00a2d1f2  68f0e97500           push 0x75e9f0
// 00a2d1f7  68b0e87500           push 0x75e8b0
// 00a2d1fc  682074a700           push 0xa77420
// 00a2d201  68a021ab00           push 0xab21a0
// 00a2d206  b9743ccd00           mov ecx, 0xcd3c74
// 00a2d20b  e8402bcfff           call 0x71fd50
// 00a2d210  6800eaa300           push 0xa3ea00
// 00a2d215  e843dfddff           call 0x80b15d
// 00a2d21a  59                   pop ecx
// 00a2d21b  c3                   ret 

extern int g_00a2d1f0_0;
extern int g_00a2d1f0_1;
extern int g_00a2d1f0_2;
extern int g_00a2d1f0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d1f0(void*);
struct O_00a2d1f0 { int m(void*, void*, void*, void*, int); };
extern O_00a2d1f0 g_obj_00a2d1f0;
extern int g_tail_00a2d1f0;
void func_00a2d1f0()
{
    g_obj_00a2d1f0.m((void*)&g_00a2d1f0_0, (void*)&g_00a2d1f0_1, (void*)&g_00a2d1f0_2, (void*)&g_00a2d1f0_3, 31);
    tail_fn_00a2d1f0(&g_tail_00a2d1f0);
}