// from server: 100% by colin
// roc 2007-08 00775400  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775400
//
// 00775400  6a05                 push 5
// 00775402  6830010000           push 0x130
// 00775407  68a4fd7b00           push 0x7bfda4
// 0077540c  68acfd7b00           push 0x7bfdac
// 00775411  b9a4748c00           mov ecx, 0x8c74a4
// 00775416  e8658be7ff           call 0x5edf80
// 0077541b  6870c07700           push 0x77c070
// 00775420  e8feb8ebff           call 0x630d23
// 00775425  59                   pop ecx
// 00775426  c3                   ret 

extern int g_00775400_0;
extern int g_00775400_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775400(void*);
struct O_00775400 { int m(void*, void*, int, int); };
extern O_00775400 g_obj_00775400;
extern int g_tail_00775400;
void func_00775400()
{
    g_obj_00775400.m((void*)&g_00775400_0, (void*)&g_00775400_1, 304, 5);
    tail_fn_00775400(&g_tail_00775400);
}