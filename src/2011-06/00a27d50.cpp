// from server: 100% by colin
// roc 2011-06 00a27d50  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27d50
//
// 00a27d50  6a00                 push 0
// 00a27d52  689c84a700           push 0xa7849c
// 00a27d57  68f4a1a800           push 0xa8a1f4
// 00a27d5c  68ac000000           push 0xac
// 00a27d61  b910fdcc00           mov ecx, 0xccfd10
// 00a27d66  e84517c7ff           call 0x6994b0
// 00a27d6b  68e0c1a300           push 0xa3c1e0
// 00a27d70  e8e833deff           call 0x80b15d
// 00a27d75  59                   pop ecx
// 00a27d76  c3                   ret 

extern int g_00a27d50_1;
extern int g_00a27d50_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27d50(void*);
struct O_00a27d50 { int m(int, void*, void*, int); };
extern O_00a27d50 g_obj_00a27d50;
extern int g_tail_00a27d50;
void func_00a27d50()
{
    g_obj_00a27d50.m(172, (void*)&g_00a27d50_1, (void*)&g_00a27d50_2, 0);
    tail_fn_00a27d50(&g_tail_00a27d50);
}