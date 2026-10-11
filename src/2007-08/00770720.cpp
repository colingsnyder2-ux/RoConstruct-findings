// from server: 100% by colin
// roc 2007-08 00770720  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770720
//
// 00770720  6a05                 push 5
// 00770722  6810010000           push 0x110
// 00770727  6848647a00           push 0x7a6448
// 0077072c  683c647a00           push 0x7a643c
// 00770731  b958128c00           mov ecx, 0x8c1258
// 00770736  e8e5d2dcff           call 0x53da20
// 0077073b  6800957700           push 0x779500
// 00770740  e8de05ecff           call 0x630d23
// 00770745  59                   pop ecx
// 00770746  c3                   ret 

extern int g_00770720_0;
extern int g_00770720_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00770720(void*);
struct O_00770720 { int m(void*, void*, int, int); };
extern O_00770720 g_obj_00770720;
extern int g_tail_00770720;
void func_00770720()
{
    g_obj_00770720.m((void*)&g_00770720_0, (void*)&g_00770720_1, 272, 5);
    tail_fn_00770720(&g_tail_00770720);
}