// from server: 100% by colin
// roc 2011-06 00a2c790  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c790
//
// 00a2c790  6a00                 push 0
// 00a2c792  68bcdbaa00           push 0xaadbbc
// 00a2c797  6890f0aa00           push 0xaaf090
// 00a2c79c  68d4000000           push 0xd4
// 00a2c7a1  b97036cd00           mov ecx, 0xcd3670
// 00a2c7a6  e89568ceff           call 0x713040
// 00a2c7ab  6850e5a300           push 0xa3e550
// 00a2c7b0  e8a8e9ddff           call 0x80b15d
// 00a2c7b5  59                   pop ecx
// 00a2c7b6  c3                   ret 

extern int g_00a2c790_1;
extern int g_00a2c790_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c790(void*);
struct O_00a2c790 { int m(int, void*, void*, int); };
extern O_00a2c790 g_obj_00a2c790;
extern int g_tail_00a2c790;
void func_00a2c790()
{
    g_obj_00a2c790.m(212, (void*)&g_00a2c790_1, (void*)&g_00a2c790_2, 0);
    tail_fn_00a2c790(&g_tail_00a2c790);
}