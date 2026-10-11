// from server: 100% by colin
// roc 2007-08 007742e0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007742e0
//
// 007742e0  6a05                 push 5
// 007742e2  6828010000           push 0x128
// 007742e7  6840a87a00           push 0x7aa840
// 007742ec  6890837b00           push 0x7b8390
// 007742f1  b910608c00           mov ecx, 0x8c6010
// 007742f6  e8551de4ff           call 0x5b6050
// 007742fb  6820b77700           push 0x77b720
// 00774300  e81ecaebff           call 0x630d23
// 00774305  59                   pop ecx
// 00774306  c3                   ret 

extern int g_007742e0_0;
extern int g_007742e0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007742e0(void*);
struct O_007742e0 { int m(void*, void*, int, int); };
extern O_007742e0 g_obj_007742e0;
extern int g_tail_007742e0;
void func_007742e0()
{
    g_obj_007742e0.m((void*)&g_007742e0_0, (void*)&g_007742e0_1, 296, 5);
    tail_fn_007742e0(&g_tail_007742e0);
}