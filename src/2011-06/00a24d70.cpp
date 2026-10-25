// from server: 100% by colin
// roc 2011-06 00a24d70  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24d70
//
// 00a24d70  6a00                 push 0
// 00a24d72  6860b9a900           push 0xa9b960
// 00a24d77  6858b9a900           push 0xa9b958
// 00a24d7c  6854b9a900           push 0xa9b954
// 00a24d81  68c4000000           push 0xc4
// 00a24d86  b9c4dacc00           mov ecx, 0xccdac4
// 00a24d8b  e890afc3ff           call 0x65fd20
// 00a24d90  68f0ada300           push 0xa3adf0
// 00a24d95  e8c363deff           call 0x80b15d
// 00a24d9a  59                   pop ecx
// 00a24d9b  c3                   ret 

extern int g_00a24d70_1;
extern int g_00a24d70_2;
extern int g_00a24d70_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24d70(void*);
struct O_00a24d70 { int m(int, void*, void*, void*, int); };
extern O_00a24d70 g_obj_00a24d70;
extern int g_tail_00a24d70;
void func_00a24d70()
{
    g_obj_00a24d70.m(196, (void*)&g_00a24d70_1, (void*)&g_00a24d70_2, (void*)&g_00a24d70_3, 0);
    tail_fn_00a24d70(&g_tail_00a24d70);
}