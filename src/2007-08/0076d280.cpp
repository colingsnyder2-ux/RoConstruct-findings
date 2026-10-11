// from server: 100% by colin
// roc 2007-08 0076d280  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d280
//
// 0076d280  6a05                 push 5
// 0076d282  68f8000000           push 0xf8
// 0076d287  68c4017900           push 0x7901c4
// 0076d28c  68d8017900           push 0x7901d8
// 0076d291  b918bd8b00           mov ecx, 0x8bbd18
// 0076d296  e8b59acdff           call 0x446d50
// 0076d29b  68a07c7700           push 0x777ca0
// 0076d2a0  e87e3aecff           call 0x630d23
// 0076d2a5  59                   pop ecx
// 0076d2a6  c3                   ret 

extern int g_0076d280_0;
extern int g_0076d280_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076d280(void*);
struct O_0076d280 { int m(void*, void*, int, int); };
extern O_0076d280 g_obj_0076d280;
extern int g_tail_0076d280;
void func_0076d280()
{
    g_obj_0076d280.m((void*)&g_0076d280_0, (void*)&g_0076d280_1, 248, 5);
    tail_fn_0076d280(&g_tail_0076d280);
}