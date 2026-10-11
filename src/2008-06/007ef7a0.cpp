// from server: 100% by colin
// roc 2008-06 007ef7a0  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef7a0
//
// 007ef7a0  6a04                 push 4
// 007ef7a2  6858010000           push 0x158
// 007ef7a7  6818648100           push 0x816418
// 007ef7ac  6880648100           push 0x816480
// 007ef7b1  b914d59600           mov ecx, 0x96d514
// 007ef7b6  e81585c5ff           call 0x447cd0
// 007ef7bb  6830ad7f00           push 0x7fad30
// 007ef7c0  e8ea1febff           call 0x6a17af
// 007ef7c5  59                   pop ecx
// 007ef7c6  c3                   ret 

extern int g_007ef7a0_0;
extern int g_007ef7a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef7a0(void*);
struct O_007ef7a0 { int m(void*, void*, int, int); };
extern O_007ef7a0 g_obj_007ef7a0;
extern int g_tail_007ef7a0;
void func_007ef7a0()
{
    g_obj_007ef7a0.m((void*)&g_007ef7a0_0, (void*)&g_007ef7a0_1, 344, 4);
    tail_fn_007ef7a0(&g_tail_007ef7a0);
}