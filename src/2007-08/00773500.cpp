// from server: 100% by colin
// roc 2007-08 00773500  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773500
//
// 00773500  6a05                 push 5
// 00773502  68ee000000           push 0xee
// 00773507  68cc347b00           push 0x7b34cc
// 0077350c  68b8347b00           push 0x7b34b8
// 00773511  b9ec528c00           mov ecx, 0x8c52ec
// 00773516  e885c2e2ff           call 0x59f7a0
// 0077351b  68d0b07700           push 0x77b0d0
// 00773520  e8fed7ebff           call 0x630d23
// 00773525  59                   pop ecx
// 00773526  c3                   ret 

extern int g_00773500_0;
extern int g_00773500_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00773500(void*);
struct O_00773500 { int m(void*, void*, int, int); };
extern O_00773500 g_obj_00773500;
extern int g_tail_00773500;
void func_00773500()
{
    g_obj_00773500.m((void*)&g_00773500_0, (void*)&g_00773500_1, 238, 5);
    tail_fn_00773500(&g_tail_00773500);
}