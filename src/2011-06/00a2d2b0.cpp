// from server: 100% by colin
// roc 2011-06 00a2d2b0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d2b0
//
// 00a2d2b0  6a1f                 push 0x1f
// 00a2d2b2  68f0e97500           push 0x75e9f0
// 00a2d2b7  68b0e87500           push 0x75e8b0
// 00a2d2bc  682074a700           push 0xa77420
// 00a2d2c1  68e421ab00           push 0xab21e4
// 00a2d2c6  b9f83ccd00           mov ecx, 0xcd3cf8
// 00a2d2cb  e8102ccfff           call 0x71fee0
// 00a2d2d0  6880eaa300           push 0xa3ea80
// 00a2d2d5  e883deddff           call 0x80b15d
// 00a2d2da  59                   pop ecx
// 00a2d2db  c3                   ret 

extern int g_00a2d2b0_0;
extern int g_00a2d2b0_1;
extern int g_00a2d2b0_2;
extern int g_00a2d2b0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d2b0(void*);
struct O_00a2d2b0 { int m(void*, void*, void*, void*, int); };
extern O_00a2d2b0 g_obj_00a2d2b0;
extern int g_tail_00a2d2b0;
void func_00a2d2b0()
{
    g_obj_00a2d2b0.m((void*)&g_00a2d2b0_0, (void*)&g_00a2d2b0_1, (void*)&g_00a2d2b0_2, (void*)&g_00a2d2b0_3, 31);
    tail_fn_00a2d2b0(&g_tail_00a2d2b0);
}