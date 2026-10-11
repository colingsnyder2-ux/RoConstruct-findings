// from server: 100% by colin
// roc 2009-06 00891610  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891610
//
// 00891610  6a07                 push 7
// 00891612  6858010000           push 0x158
// 00891617  689c788e00           push 0x8e789c
// 0089161c  6848798e00           push 0x8e7948
// 00891621  b910eea400           mov ecx, 0xa4ee10
// 00891626  e8451ee0ff           call 0x693470
// 0089162b  68a0c48900           push 0x89c4a0
// 00891630  e8c684e8ff           call 0x719afb
// 00891635  59                   pop ecx
// 00891636  c3                   ret 

extern int g_00891610_0;
extern int g_00891610_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891610(void*);
struct O_00891610 { int m(void*, void*, int, int); };
extern O_00891610 g_obj_00891610;
extern int g_tail_00891610;
void func_00891610()
{
    g_obj_00891610.m((void*)&g_00891610_0, (void*)&g_00891610_1, 344, 7);
    tail_fn_00891610(&g_tail_00891610);
}