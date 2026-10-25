// from server: 100% by colin
// roc 2011-06 00a28be0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28be0
//
// 00a28be0  6a00                 push 0
// 00a28be2  6a02                 push 2
// 00a28be4  68d4020000           push 0x2d4
// 00a28be9  688064a900           push 0xa96480
// 00a28bee  68a440aa00           push 0xaa40a4
// 00a28bf3  b9a801cd00           mov ecx, 0xcd01a8
// 00a28bf8  e8a32bc8ff           call 0x6ab7a0
// 00a28bfd  68e0c3a300           push 0xa3c3e0
// 00a28c02  e85625deff           call 0x80b15d
// 00a28c07  59                   pop ecx
// 00a28c08  c3                   ret 

extern int g_00a28be0_0;
extern int g_00a28be0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28be0(void*);
struct O_00a28be0 { int m(void*, void*, int, int, int); };
extern O_00a28be0 g_obj_00a28be0;
extern int g_tail_00a28be0;
void func_00a28be0()
{
    g_obj_00a28be0.m((void*)&g_00a28be0_0, (void*)&g_00a28be0_1, 724, 2, 0);
    tail_fn_00a28be0(&g_tail_00a28be0);
}