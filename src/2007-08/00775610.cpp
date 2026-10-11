// from server: 100% by colin
// roc 2007-08 00775610  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775610
//
// 00775610  6a05                 push 5
// 00775612  6800010000           push 0x100
// 00775617  6844fd7b00           push 0x7bfd44
// 0077561c  68304a7800           push 0x784a30
// 00775621  b988748c00           mov ecx, 0x8c7488
// 00775626  e8b57de7ff           call 0x5ed3e0
// 0077562b  6830c17700           push 0x77c130
// 00775630  e8eeb6ebff           call 0x630d23
// 00775635  59                   pop ecx
// 00775636  c3                   ret 

extern int g_00775610_0;
extern int g_00775610_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775610(void*);
struct O_00775610 { int m(void*, void*, int, int); };
extern O_00775610 g_obj_00775610;
extern int g_tail_00775610;
void func_00775610()
{
    g_obj_00775610.m((void*)&g_00775610_0, (void*)&g_00775610_1, 256, 5);
    tail_fn_00775610(&g_tail_00775610);
}