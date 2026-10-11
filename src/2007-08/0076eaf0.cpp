// from server: 100% by colin
// roc 2007-08 0076eaf0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eaf0
//
// 0076eaf0  6a04                 push 4
// 0076eaf2  6858010000           push 0x158
// 0076eaf7  6898b67900           push 0x79b698
// 0076eafc  68bcb67900           push 0x79b6bc
// 0076eb01  b958df8b00           mov ecx, 0x8bdf58
// 0076eb06  e865f2d1ff           call 0x48dd70
// 0076eb0b  6870807700           push 0x778070
// 0076eb10  e80e22ecff           call 0x630d23
// 0076eb15  59                   pop ecx
// 0076eb16  c3                   ret 

extern int g_0076eaf0_0;
extern int g_0076eaf0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076eaf0(void*);
struct O_0076eaf0 { int m(void*, void*, int, int); };
extern O_0076eaf0 g_obj_0076eaf0;
extern int g_tail_0076eaf0;
void func_0076eaf0()
{
    g_obj_0076eaf0.m((void*)&g_0076eaf0_0, (void*)&g_0076eaf0_1, 344, 4);
    tail_fn_0076eaf0(&g_tail_0076eaf0);
}