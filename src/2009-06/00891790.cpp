// from server: 100% by colin
// roc 2009-06 00891790  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891790
//
// 00891790  6a07                 push 7
// 00891792  6850010000           push 0x150
// 00891797  689c788e00           push 0x8e789c
// 0089179c  6860558c00           push 0x8c5560
// 008917a1  b92ceea400           mov ecx, 0xa4ee2c
// 008917a6  e80520e0ff           call 0x6937b0
// 008917ab  6880c58900           push 0x89c580
// 008917b0  e84683e8ff           call 0x719afb
// 008917b5  59                   pop ecx
// 008917b6  c3                   ret 

extern int g_00891790_0;
extern int g_00891790_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891790(void*);
struct O_00891790 { int m(void*, void*, int, int); };
extern O_00891790 g_obj_00891790;
extern int g_tail_00891790;
void func_00891790()
{
    g_obj_00891790.m((void*)&g_00891790_0, (void*)&g_00891790_1, 336, 7);
    tail_fn_00891790(&g_tail_00891790);
}