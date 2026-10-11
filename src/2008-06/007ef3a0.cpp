// from server: 100% by colin
// roc 2008-06 007ef3a0  unit: seg_007e0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ef3a0
//
// 007ef3a0  6a05                 push 5
// 007ef3a2  6834010000           push 0x134
// 007ef3a7  68605b8100           push 0x815b60
// 007ef3ac  68845b8100           push 0x815b84
// 007ef3b1  b900d39600           mov ecx, 0x96d300
// 007ef3b6  e89553c5ff           call 0x444750
// 007ef3bb  6860ab7f00           push 0x7fab60
// 007ef3c0  e8ea23ebff           call 0x6a17af
// 007ef3c5  59                   pop ecx
// 007ef3c6  c3                   ret 

extern int g_007ef3a0_0;
extern int g_007ef3a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007ef3a0(void*);
struct O_007ef3a0 { int m(void*, void*, int, int); };
extern O_007ef3a0 g_obj_007ef3a0;
extern int g_tail_007ef3a0;
void func_007ef3a0()
{
    g_obj_007ef3a0.m((void*)&g_007ef3a0_0, (void*)&g_007ef3a0_1, 308, 5);
    tail_fn_007ef3a0(&g_tail_007ef3a0);
}