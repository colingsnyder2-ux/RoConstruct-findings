// from server: 100% by colin
// roc 2007-08 00775580  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775580
//
// 00775580  6a05                 push 5
// 00775582  6804010000           push 0x104
// 00775587  6844fd7b00           push 0x7bfd44
// 0077558c  68f4fd7b00           push 0x7bfdf4
// 00775591  b9c0748c00           mov ecx, 0x8c74c0
// 00775596  e8358de7ff           call 0x5ee2d0
// 0077559b  6810c17700           push 0x77c110
// 007755a0  e87eb7ebff           call 0x630d23
// 007755a5  59                   pop ecx
// 007755a6  c3                   ret 

extern int g_00775580_0;
extern int g_00775580_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775580(void*);
struct O_00775580 { int m(void*, void*, int, int); };
extern O_00775580 g_obj_00775580;
extern int g_tail_00775580;
void func_00775580()
{
    g_obj_00775580.m((void*)&g_00775580_0, (void*)&g_00775580_1, 260, 5);
    tail_fn_00775580(&g_tail_00775580);
}