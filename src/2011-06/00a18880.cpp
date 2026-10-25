// from server: 100% by colin
// roc 2011-06 00a18880  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a18880
//
// 00a18880  6a03                 push 3
// 00a18882  683484a700           push 0xa78434
// 00a18887  68a095a700           push 0xa795a0
// 00a1888c  68f4010000           push 0x1f4
// 00a18891  b9d06bcb00           mov ecx, 0xcb6bd0
// 00a18896  e805ccabff           call 0x4d54a0
// 00a1889b  687030a300           push 0xa33070
// 00a188a0  e8b828dfff           call 0x80b15d
// 00a188a5  59                   pop ecx
// 00a188a6  c3                   ret 

extern int g_00a18880_1;
extern int g_00a18880_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a18880(void*);
struct O_00a18880 { int m(int, void*, void*, int); };
extern O_00a18880 g_obj_00a18880;
extern int g_tail_00a18880;
void func_00a18880()
{
    g_obj_00a18880.m(500, (void*)&g_00a18880_1, (void*)&g_00a18880_2, 3);
    tail_fn_00a18880(&g_tail_00a18880);
}