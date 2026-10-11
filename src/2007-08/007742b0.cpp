// from server: 100% by colin
// roc 2007-08 007742b0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007742b0
//
// 007742b0  6a05                 push 5
// 007742b2  6808010000           push 0x108
// 007742b7  6840a87a00           push 0x7aa840
// 007742bc  6884837b00           push 0x7b8384
// 007742c1  b9845f8c00           mov ecx, 0x8c5f84
// 007742c6  e8851de4ff           call 0x5b6050
// 007742cb  68a0b77700           push 0x77b7a0
// 007742d0  e84ecaebff           call 0x630d23
// 007742d5  59                   pop ecx
// 007742d6  c3                   ret 

extern int g_007742b0_0;
extern int g_007742b0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007742b0(void*);
struct O_007742b0 { int m(void*, void*, int, int); };
extern O_007742b0 g_obj_007742b0;
extern int g_tail_007742b0;
void func_007742b0()
{
    g_obj_007742b0.m((void*)&g_007742b0_0, (void*)&g_007742b0_1, 264, 5);
    tail_fn_007742b0(&g_tail_007742b0);
}