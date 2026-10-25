// from server: 100% by colin
// roc 2011-06 00a22a90  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22a90
//
// 00a22a90  6a03                 push 3
// 00a22a92  6a15                 push 0x15
// 00a22a94  6820010000           push 0x120
// 00a22a99  6858d4a600           push 0xa6d458
// 00a22a9e  687855a900           push 0xa95578
// 00a22aa3  b988bccc00           mov ecx, 0xccbc88
// 00a22aa8  e8e3c1bfff           call 0x61ec90
// 00a22aad  68709ba300           push 0xa39b70
// 00a22ab2  e8a686deff           call 0x80b15d
// 00a22ab7  59                   pop ecx
// 00a22ab8  c3                   ret 

extern int g_00a22a90_0;
extern int g_00a22a90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22a90(void*);
struct O_00a22a90 { int m(void*, void*, int, int, int); };
extern O_00a22a90 g_obj_00a22a90;
extern int g_tail_00a22a90;
void func_00a22a90()
{
    g_obj_00a22a90.m((void*)&g_00a22a90_0, (void*)&g_00a22a90_1, 288, 21, 3);
    tail_fn_00a22a90(&g_tail_00a22a90);
}