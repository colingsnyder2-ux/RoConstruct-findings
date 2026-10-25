// from server: 100% by colin
// roc 2011-06 00a27af0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27af0
//
// 00a27af0  6a00                 push 0
// 00a27af2  689c84a700           push 0xa7849c
// 00a27af7  68f4a1a800           push 0xa8a1f4
// 00a27afc  6894000000           push 0x94
// 00a27b01  b9e4fdcc00           mov ecx, 0xccfde4
// 00a27b06  e82516c7ff           call 0x699130
// 00a27b0b  6850c2a300           push 0xa3c250
// 00a27b10  e84836deff           call 0x80b15d
// 00a27b15  59                   pop ecx
// 00a27b16  c3                   ret 

extern int g_00a27af0_1;
extern int g_00a27af0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27af0(void*);
struct O_00a27af0 { int m(int, void*, void*, int); };
extern O_00a27af0 g_obj_00a27af0;
extern int g_tail_00a27af0;
void func_00a27af0()
{
    g_obj_00a27af0.m(148, (void*)&g_00a27af0_1, (void*)&g_00a27af0_2, 0);
    tail_fn_00a27af0(&g_tail_00a27af0);
}