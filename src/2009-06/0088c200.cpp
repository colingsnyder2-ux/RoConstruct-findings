// from server: 100% by colin
// roc 2009-06 0088c200  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088c200
//
// 0088c200  68d07b8d00           push 0x8d7bd0
// 0088c205  68c87b8d00           push 0x8d7bc8
// 0088c20a  68bc7b8d00           push 0x8d7bbc
// 0088c20f  68e0020000           push 0x2e0
// 0088c214  b978aba400           mov ecx, 0xa4ab78
// 0088c219  e89262d7ff           call 0x6024b0
// 0088c21e  6880988900           push 0x899880
// 0088c223  e8d3d8e8ff           call 0x719afb
// 0088c228  59                   pop ecx
// 0088c229  c3                   ret 

extern int g_0088c200_1;
extern int g_0088c200_2;
extern int g_0088c200_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088c200(void*);
struct O_0088c200 { int m(int, void*, void*, void*); };
extern O_0088c200 g_obj_0088c200;
extern int g_tail_0088c200;
void func_0088c200()
{
    g_obj_0088c200.m(736, (void*)&g_0088c200_1, (void*)&g_0088c200_2, (void*)&g_0088c200_3);
    tail_fn_0088c200(&g_tail_0088c200);
}