// from server: 100% by colin
// roc 2011-06 00a296c0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a296c0
//
// 00a296c0  6a00                 push 0
// 00a296c2  683857aa00           push 0xaa5738
// 00a296c7  682c57aa00           push 0xaa572c
// 00a296cc  68a4020000           push 0x2a4
// 00a296d1  b9f810cd00           mov ecx, 0xcd10f8
// 00a296d6  e8a51ccaff           call 0x6cb380
// 00a296db  6830cda300           push 0xa3cd30
// 00a296e0  e8781adeff           call 0x80b15d
// 00a296e5  59                   pop ecx
// 00a296e6  c3                   ret 

extern int g_00a296c0_1;
extern int g_00a296c0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a296c0(void*);
struct O_00a296c0 { int m(int, void*, void*, int); };
extern O_00a296c0 g_obj_00a296c0;
extern int g_tail_00a296c0;
void func_00a296c0()
{
    g_obj_00a296c0.m(676, (void*)&g_00a296c0_1, (void*)&g_00a296c0_2, 0);
    tail_fn_00a296c0(&g_tail_00a296c0);
}