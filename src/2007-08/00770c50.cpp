// from server: 100% by colin
// roc 2007-08 00770c50  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770c50
//
// 00770c50  6a04                 push 4
// 00770c52  68e9000000           push 0xe9
// 00770c57  68c06d7a00           push 0x7a6dc0
// 00770c5c  68c86d7a00           push 0x7a6dc8
// 00770c61  b9ac178c00           mov ecx, 0x8c17ac
// 00770c66  e89532ddff           call 0x543f00
// 00770c6b  68a0997700           push 0x7799a0
// 00770c70  e8ae00ecff           call 0x630d23
// 00770c75  59                   pop ecx
// 00770c76  c3                   ret 

extern int g_00770c50_0;
extern int g_00770c50_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00770c50(void*);
struct O_00770c50 { int m(void*, void*, int, int); };
extern O_00770c50 g_obj_00770c50;
extern int g_tail_00770c50;
void func_00770c50()
{
    g_obj_00770c50.m((void*)&g_00770c50_0, (void*)&g_00770c50_1, 233, 4);
    tail_fn_00770c50(&g_tail_00770c50);
}