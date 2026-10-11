// from server: 100% by colin
// roc 2007-08 00774310  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774310
//
// 00774310  6a05                 push 5
// 00774312  6848010000           push 0x148
// 00774317  6840a87a00           push 0x7aa840
// 0077431c  689c837b00           push 0x7b839c
// 00774321  b9a05f8c00           mov ecx, 0x8c5fa0
// 00774326  e8251de4ff           call 0x5b6050
// 0077432b  6840b77700           push 0x77b740
// 00774330  e8eec9ebff           call 0x630d23
// 00774335  59                   pop ecx
// 00774336  c3                   ret 

extern int g_00774310_0;
extern int g_00774310_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00774310(void*);
struct O_00774310 { int m(void*, void*, int, int); };
extern O_00774310 g_obj_00774310;
extern int g_tail_00774310;
void func_00774310()
{
    g_obj_00774310.m((void*)&g_00774310_0, (void*)&g_00774310_1, 328, 5);
    tail_fn_00774310(&g_tail_00774310);
}