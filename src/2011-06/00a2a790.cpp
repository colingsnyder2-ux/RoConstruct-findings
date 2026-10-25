// from server: 100% by colin
// roc 2011-06 00a2a790  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a790
//
// 00a2a790  6a00                 push 0
// 00a2a792  68a887a700           push 0xa787a8
// 00a2a797  682894aa00           push 0xaa9428
// 00a2a79c  6894000000           push 0x94
// 00a2a7a1  b9901ecd00           mov ecx, 0xcd1e90
// 00a2a7a6  e8a574ccff           call 0x6f1c50
// 00a2a7ab  68d0d4a300           push 0xa3d4d0
// 00a2a7b0  e8a809deff           call 0x80b15d
// 00a2a7b5  59                   pop ecx
// 00a2a7b6  c3                   ret 

extern int g_00a2a790_1;
extern int g_00a2a790_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a790(void*);
struct O_00a2a790 { int m(int, void*, void*, int); };
extern O_00a2a790 g_obj_00a2a790;
extern int g_tail_00a2a790;
void func_00a2a790()
{
    g_obj_00a2a790.m(148, (void*)&g_00a2a790_1, (void*)&g_00a2a790_2, 0);
    tail_fn_00a2a790(&g_tail_00a2a790);
}