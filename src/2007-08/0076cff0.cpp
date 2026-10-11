// from server: 100% by colin
// roc 2007-08 0076cff0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cff0
//
// 0076cff0  6a05                 push 5
// 0076cff2  680c010000           push 0x10c
// 0076cff7  68d4f97800           push 0x78f9d4
// 0076cffc  6810fa7800           push 0x78fa10
// 0076d001  b9b0ba8b00           mov ecx, 0x8bbab0
// 0076d006  e80570cdff           call 0x444010
// 0076d00b  68107b7700           push 0x777b10
// 0076d010  e80e3decff           call 0x630d23
// 0076d015  59                   pop ecx
// 0076d016  c3                   ret 

extern int g_0076cff0_0;
extern int g_0076cff0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076cff0(void*);
struct O_0076cff0 { int m(void*, void*, int, int); };
extern O_0076cff0 g_obj_0076cff0;
extern int g_tail_0076cff0;
void func_0076cff0()
{
    g_obj_0076cff0.m((void*)&g_0076cff0_0, (void*)&g_0076cff0_1, 268, 5);
    tail_fn_0076cff0(&g_tail_0076cff0);
}