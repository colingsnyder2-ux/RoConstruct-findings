// from server: 100% by colin
// roc 2007-08 00773530  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773530
//
// 00773530  6a05                 push 5
// 00773532  68e8000000           push 0xe8
// 00773537  68e0347b00           push 0x7b34e0
// 0077353c  68d4347b00           push 0x7b34d4
// 00773541  b9b4528c00           mov ecx, 0x8c52b4
// 00773546  e825c3e2ff           call 0x59f870
// 0077354b  68b0b07700           push 0x77b0b0
// 00773550  e8ced7ebff           call 0x630d23
// 00773555  59                   pop ecx
// 00773556  c3                   ret 

extern int g_00773530_0;
extern int g_00773530_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00773530(void*);
struct O_00773530 { int m(void*, void*, int, int); };
extern O_00773530 g_obj_00773530;
extern int g_tail_00773530;
void func_00773530()
{
    g_obj_00773530.m((void*)&g_00773530_0, (void*)&g_00773530_1, 232, 5);
    tail_fn_00773530(&g_tail_00773530);
}