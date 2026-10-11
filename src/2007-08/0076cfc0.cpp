// from server: 100% by colin
// roc 2007-08 0076cfc0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cfc0
//
// 0076cfc0  6a05                 push 5
// 0076cfc2  6808010000           push 0x108
// 0076cfc7  68d4f97800           push 0x78f9d4
// 0076cfcc  6800fa7800           push 0x78fa00
// 0076cfd1  b994ba8b00           mov ecx, 0x8bba94
// 0076cfd6  e83570cdff           call 0x444010
// 0076cfdb  68307b7700           push 0x777b30
// 0076cfe0  e83e3decff           call 0x630d23
// 0076cfe5  59                   pop ecx
// 0076cfe6  c3                   ret 

extern int g_0076cfc0_0;
extern int g_0076cfc0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cfc0(void*);
struct O_0076cfc0 { int m(void*, void*, int, int); };
extern O_0076cfc0 g_obj_0076cfc0;
extern int g_tail_0076cfc0;
void func_0076cfc0()
{
    g_obj_0076cfc0.m((void*)&g_0076cfc0_0, (void*)&g_0076cfc0_1, 264, 5);
    tail_fn_0076cfc0(&g_tail_0076cfc0);
}