// from server: 100% by colin
// roc 2011-06 00a288b0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a288b0
//
// 00a288b0  6a00                 push 0
// 00a288b2  6a02                 push 2
// 00a288b4  687c010000           push 0x17c
// 00a288b9  688064a900           push 0xa96480
// 00a288be  68603faa00           push 0xaa3f60
// 00a288c3  b91006cd00           mov ecx, 0xcd0610
// 00a288c8  e8932dc8ff           call 0x6ab660
// 00a288cd  6820c3a300           push 0xa3c320
// 00a288d2  e88628deff           call 0x80b15d
// 00a288d7  59                   pop ecx
// 00a288d8  c3                   ret 

extern int g_00a288b0_0;
extern int g_00a288b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a288b0(void*);
struct O_00a288b0 { int m(void*, void*, int, int, int); };
extern O_00a288b0 g_obj_00a288b0;
extern int g_tail_00a288b0;
void func_00a288b0()
{
    g_obj_00a288b0.m((void*)&g_00a288b0_0, (void*)&g_00a288b0_1, 380, 2, 0);
    tail_fn_00a288b0(&g_tail_00a288b0);
}