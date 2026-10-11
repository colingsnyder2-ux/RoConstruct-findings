// from server: 100% by colin
// roc 2007-08 0076eac0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eac0
//
// 0076eac0  6a05                 push 5
// 0076eac2  685c010000           push 0x15c
// 0076eac7  6898b67900           push 0x79b698
// 0076eacc  68b4b67900           push 0x79b6b4
// 0076ead1  b92cde8b00           mov ecx, 0x8bde2c
// 0076ead6  e8b5f1d1ff           call 0x48dc90
// 0076eadb  6890807700           push 0x778090
// 0076eae0  e83e22ecff           call 0x630d23
// 0076eae5  59                   pop ecx
// 0076eae6  c3                   ret 

extern int g_0076eac0_0;
extern int g_0076eac0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076eac0(void*);
struct O_0076eac0 { int m(void*, void*, int, int); };
extern O_0076eac0 g_obj_0076eac0;
extern int g_tail_0076eac0;
void func_0076eac0()
{
    g_obj_0076eac0.m((void*)&g_0076eac0_0, (void*)&g_0076eac0_1, 348, 5);
    tail_fn_0076eac0(&g_tail_0076eac0);
}