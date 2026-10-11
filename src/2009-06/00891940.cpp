// from server: 100% by colin
// roc 2009-06 00891940  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891940
//
// 00891940  6a07                 push 7
// 00891942  6850010000           push 0x150
// 00891947  689c788e00           push 0x8e789c
// 0089194c  68ac798e00           push 0x8e79ac
// 00891951  b9e4efa400           mov ecx, 0xa4efe4
// 00891956  e86522e0ff           call 0x693bc0
// 0089195b  6840c68900           push 0x89c640
// 00891960  e89681e8ff           call 0x719afb
// 00891965  59                   pop ecx
// 00891966  c3                   ret 

extern int g_00891940_0;
extern int g_00891940_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891940(void*);
struct O_00891940 { int m(void*, void*, int, int); };
extern O_00891940 g_obj_00891940;
extern int g_tail_00891940;
void func_00891940()
{
    g_obj_00891940.m((void*)&g_00891940_0, (void*)&g_00891940_1, 336, 7);
    tail_fn_00891940(&g_tail_00891940);
}