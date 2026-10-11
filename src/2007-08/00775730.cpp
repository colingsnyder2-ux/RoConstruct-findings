// from server: 100% by colin
// roc 2007-08 00775730  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775730
//
// 00775730  6a05                 push 5
// 00775732  6800010000           push 0x100
// 00775737  6844fd7b00           push 0x7bfd44
// 0077573c  6808fe7b00           push 0x7bfe08
// 00775741  b960768c00           mov ecx, 0x8c7660
// 00775746  e8057fe7ff           call 0x5ed650
// 0077574b  68d0c17700           push 0x77c1d0
// 00775750  e8ceb5ebff           call 0x630d23
// 00775755  59                   pop ecx
// 00775756  c3                   ret 

extern int g_00775730_0;
extern int g_00775730_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775730(void*);
struct O_00775730 { int m(void*, void*, int, int); };
extern O_00775730 g_obj_00775730;
extern int g_tail_00775730;
void func_00775730()
{
    g_obj_00775730.m((void*)&g_00775730_0, (void*)&g_00775730_1, 256, 5);
    tail_fn_00775730(&g_tail_00775730);
}