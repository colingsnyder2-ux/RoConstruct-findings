// from server: 100% by colin
// roc 2007-08 00775430  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775430
//
// 00775430  6a05                 push 5
// 00775432  6834010000           push 0x134
// 00775437  68a4fd7b00           push 0x7bfda4
// 0077543c  68b4fd7b00           push 0x7bfdb4
// 00775441  b938758c00           mov ecx, 0x8c7538
// 00775446  e8e58ce7ff           call 0x5ee130
// 0077544b  68b0c07700           push 0x77c0b0
// 00775450  e8ceb8ebff           call 0x630d23
// 00775455  59                   pop ecx
// 00775456  c3                   ret 

extern int g_00775430_0;
extern int g_00775430_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775430(void*);
struct O_00775430 { int m(void*, void*, int, int); };
extern O_00775430 g_obj_00775430;
extern int g_tail_00775430;
void func_00775430()
{
    g_obj_00775430.m((void*)&g_00775430_0, (void*)&g_00775430_1, 308, 5);
    tail_fn_00775430(&g_tail_00775430);
}