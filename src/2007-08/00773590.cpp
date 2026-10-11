// from server: 100% by colin
// roc 2007-08 00773590  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773590
//
// 00773590  6a05                 push 5
// 00773592  68ed000000           push 0xed
// 00773597  68c8f07a00           push 0x7af0c8
// 0077359c  68f8347b00           push 0x7b34f8
// 007735a1  b9d0528c00           mov ecx, 0x8c52d0
// 007735a6  e8f5c1e2ff           call 0x59f7a0
// 007735ab  6870b07700           push 0x77b070
// 007735b0  e86ed7ebff           call 0x630d23
// 007735b5  59                   pop ecx
// 007735b6  c3                   ret 

extern int g_00773590_0;
extern int g_00773590_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00773590(void*);
struct O_00773590 { int m(void*, void*, int, int); };
extern O_00773590 g_obj_00773590;
extern int g_tail_00773590;
void func_00773590()
{
    g_obj_00773590.m((void*)&g_00773590_0, (void*)&g_00773590_1, 237, 5);
    tail_fn_00773590(&g_tail_00773590);
}