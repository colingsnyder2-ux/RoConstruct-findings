// from server: 100% by colin
// roc 2007-08 00773560  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773560
//
// 00773560  6a05                 push 5
// 00773562  68ec000000           push 0xec
// 00773567  68c8f07a00           push 0x7af0c8
// 0077356c  68e8347b00           push 0x7b34e8
// 00773571  b998528c00           mov ecx, 0x8c5298
// 00773576  e825c2e2ff           call 0x59f7a0
// 0077357b  6890b07700           push 0x77b090
// 00773580  e89ed7ebff           call 0x630d23
// 00773585  59                   pop ecx
// 00773586  c3                   ret 

extern int g_00773560_0;
extern int g_00773560_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00773560(void*);
struct O_00773560 { int m(void*, void*, int, int); };
extern O_00773560 g_obj_00773560;
extern int g_tail_00773560;
void func_00773560()
{
    g_obj_00773560.m((void*)&g_00773560_0, (void*)&g_00773560_1, 236, 5);
    tail_fn_00773560(&g_tail_00773560);
}