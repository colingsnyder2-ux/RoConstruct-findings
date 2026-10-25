// from server: 100% by colin
// roc 2011-06 00a28120  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28120
//
// 00a28120  6a00                 push 0
// 00a28122  689c84a700           push 0xa7849c
// 00a28127  68f4a1a800           push 0xa8a1f4
// 00a2812c  6898000000           push 0x98
// 00a28131  b9f0facc00           mov ecx, 0xccfaf0
// 00a28136  e8b518c7ff           call 0x6999f0
// 00a2813b  6840c2a300           push 0xa3c240
// 00a28140  e81830deff           call 0x80b15d
// 00a28145  59                   pop ecx
// 00a28146  c3                   ret 

extern int g_00a28120_1;
extern int g_00a28120_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28120(void*);
struct O_00a28120 { int m(int, void*, void*, int); };
extern O_00a28120 g_obj_00a28120;
extern int g_tail_00a28120;
void func_00a28120()
{
    g_obj_00a28120.m(152, (void*)&g_00a28120_1, (void*)&g_00a28120_2, 0);
    tail_fn_00a28120(&g_tail_00a28120);
}