// from server: 100% by colin
// roc 2011-06 00a242a0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a242a0
//
// 00a242a0  6a00                 push 0
// 00a242a2  6a1f                 push 0x1f
// 00a242a4  689c000000           push 0x9c
// 00a242a9  685093a900           push 0xa99350
// 00a242ae  687093a900           push 0xa99370
// 00a242b3  b918d0cc00           mov ecx, 0xccd018
// 00a242b8  e82357c2ff           call 0x6499e0
// 00a242bd  68b0a7a300           push 0xa3a7b0
// 00a242c2  e8966edeff           call 0x80b15d
// 00a242c7  59                   pop ecx
// 00a242c8  c3                   ret 

extern int g_00a242a0_0;
extern int g_00a242a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a242a0(void*);
struct O_00a242a0 { int m(void*, void*, int, int, int); };
extern O_00a242a0 g_obj_00a242a0;
extern int g_tail_00a242a0;
void func_00a242a0()
{
    g_obj_00a242a0.m((void*)&g_00a242a0_0, (void*)&g_00a242a0_1, 156, 31, 0);
    tail_fn_00a242a0(&g_tail_00a242a0);
}