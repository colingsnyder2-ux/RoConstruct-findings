// from server: 100% by colin
// roc 2007-08 0076d2b0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d2b0
//
// 0076d2b0  6a04                 push 4
// 0076d2b2  68fc000000           push 0xfc
// 0076d2b7  6878017900           push 0x790178
// 0076d2bc  68e8017900           push 0x7901e8
// 0076d2c1  b934bd8b00           mov ecx, 0x8bbd34
// 0076d2c6  e8659bcdff           call 0x446e30
// 0076d2cb  68807c7700           push 0x777c80
// 0076d2d0  e84e3aecff           call 0x630d23
// 0076d2d5  59                   pop ecx
// 0076d2d6  c3                   ret 

extern int g_0076d2b0_0;
extern int g_0076d2b0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076d2b0(void*);
struct O_0076d2b0 { int m(void*, void*, int, int); };
extern O_0076d2b0 g_obj_0076d2b0;
extern int g_tail_0076d2b0;
void func_0076d2b0()
{
    g_obj_0076d2b0.m((void*)&g_0076d2b0_0, (void*)&g_0076d2b0_1, 252, 4);
    tail_fn_0076d2b0(&g_tail_0076d2b0);
}