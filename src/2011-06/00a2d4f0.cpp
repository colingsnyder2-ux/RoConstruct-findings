// from server: 100% by colin
// roc 2011-06 00a2d4f0  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d4f0
//
// 00a2d4f0  6a1f                 push 0x1f
// 00a2d4f2  68f0e97500           push 0x75e9f0
// 00a2d4f7  68b0e87500           push 0x75e8b0
// 00a2d4fc  682074a700           push 0xa77420
// 00a2d501  689422ab00           push 0xab2294
// 00a2d506  b9903bcd00           mov ecx, 0xcd3b90
// 00a2d50b  e8502ecfff           call 0x720360
// 00a2d510  6800eca300           push 0xa3ec00
// 00a2d515  e843dcddff           call 0x80b15d
// 00a2d51a  59                   pop ecx
// 00a2d51b  c3                   ret 

extern int g_00a2d4f0_0;
extern int g_00a2d4f0_1;
extern int g_00a2d4f0_2;
extern int g_00a2d4f0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d4f0(void*);
struct O_00a2d4f0 { int m(void*, void*, void*, void*, int); };
extern O_00a2d4f0 g_obj_00a2d4f0;
extern int g_tail_00a2d4f0;
void func_00a2d4f0()
{
    g_obj_00a2d4f0.m((void*)&g_00a2d4f0_0, (void*)&g_00a2d4f0_1, (void*)&g_00a2d4f0_2, (void*)&g_00a2d4f0_3, 31);
    tail_fn_00a2d4f0(&g_tail_00a2d4f0);
}