// from server: 100% by colin
// roc 2009-06 00891670  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891670
//
// 00891670  6a07                 push 7
// 00891672  6850010000           push 0x150
// 00891677  689c788e00           push 0x8e789c
// 0089167c  6860558c00           push 0x8c5560
// 00891681  b9f8eca400           mov ecx, 0xa4ecf8
// 00891686  e8851fe0ff           call 0x693610
// 0089168b  68e0c48900           push 0x89c4e0
// 00891690  e86684e8ff           call 0x719afb
// 00891695  59                   pop ecx
// 00891696  c3                   ret 

extern int g_00891670_0;
extern int g_00891670_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891670(void*);
struct O_00891670 { int m(void*, void*, int, int); };
extern O_00891670 g_obj_00891670;
extern int g_tail_00891670;
void func_00891670()
{
    g_obj_00891670.m((void*)&g_00891670_0, (void*)&g_00891670_1, 336, 7);
    tail_fn_00891670(&g_tail_00891670);
}