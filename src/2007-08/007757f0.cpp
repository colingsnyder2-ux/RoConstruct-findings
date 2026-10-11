// from server: 100% by colin
// roc 2007-08 007757f0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007757f0
//
// 007757f0  6a05                 push 5
// 007757f2  68fc000000           push 0xfc
// 007757f7  6844fd7b00           push 0x7bfd44
// 007757fc  6848fe7b00           push 0x7bfe48
// 00775801  b918748c00           mov ecx, 0x8c7418
// 00775806  e8358ee7ff           call 0x5ee640
// 0077580b  6810c27700           push 0x77c210
// 00775810  e80eb5ebff           call 0x630d23
// 00775815  59                   pop ecx
// 00775816  c3                   ret 

extern int g_007757f0_0;
extern int g_007757f0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007757f0(void*);
struct O_007757f0 { int m(void*, void*, int, int); };
extern O_007757f0 g_obj_007757f0;
extern int g_tail_007757f0;
void func_007757f0()
{
    g_obj_007757f0.m((void*)&g_007757f0_0, (void*)&g_007757f0_1, 252, 5);
    tail_fn_007757f0(&g_tail_007757f0);
}