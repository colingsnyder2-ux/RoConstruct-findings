// from server: 100% by colin
// roc 2007-08 007743d0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007743d0
//
// 007743d0  6a05                 push 5
// 007743d2  68a8010000           push 0x1a8
// 007743d7  6840a87a00           push 0x7aa840
// 007743dc  68cc837b00           push 0x7b83cc
// 007743e1  b9685f8c00           mov ecx, 0x8c5f68
// 007743e6  e8051ee4ff           call 0x5b61f0
// 007743eb  68e0b77700           push 0x77b7e0
// 007743f0  e82ec9ebff           call 0x630d23
// 007743f5  59                   pop ecx
// 007743f6  c3                   ret 

extern int g_007743d0_0;
extern int g_007743d0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007743d0(void*);
struct O_007743d0 { int m(void*, void*, int, int); };
extern O_007743d0 g_obj_007743d0;
extern int g_tail_007743d0;
void func_007743d0()
{
    g_obj_007743d0.m((void*)&g_007743d0_0, (void*)&g_007743d0_1, 424, 5);
    tail_fn_007743d0(&g_tail_007743d0);
}