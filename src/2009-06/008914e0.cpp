// from server: 100% by colin
// roc 2009-06 008914e0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008914e0
//
// 008914e0  6a07                 push 7
// 008914e2  68a0010000           push 0x1a0
// 008914e7  689c788e00           push 0x8e789c
// 008914ec  6818798e00           push 0x8e7918
// 008914f1  b9dceca400           mov ecx, 0xa4ecdc
// 008914f6  e8051de0ff           call 0x693200
// 008914fb  6820c48900           push 0x89c420
// 00891500  e8f685e8ff           call 0x719afb
// 00891505  59                   pop ecx
// 00891506  c3                   ret 

extern int g_008914e0_0;
extern int g_008914e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008914e0(void*);
struct O_008914e0 { int m(void*, void*, int, int); };
extern O_008914e0 g_obj_008914e0;
extern int g_tail_008914e0;
void func_008914e0()
{
    g_obj_008914e0.m((void*)&g_008914e0_0, (void*)&g_008914e0_1, 416, 7);
    tail_fn_008914e0(&g_tail_008914e0);
}