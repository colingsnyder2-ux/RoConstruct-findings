// from server: 100% by colin
// roc 2009-06 00891480  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891480
//
// 00891480  6a07                 push 7
// 00891482  6890010000           push 0x190
// 00891487  68fc788e00           push 0x8e78fc
// 0089148c  6804798e00           push 0x8e7904
// 00891491  b9f4eda400           mov ecx, 0xa4edf4
// 00891496  e8651de0ff           call 0x693200
// 0089149b  6800c48900           push 0x89c400
// 008914a0  e85686e8ff           call 0x719afb
// 008914a5  59                   pop ecx
// 008914a6  c3                   ret 

extern int g_00891480_0;
extern int g_00891480_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891480(void*);
struct O_00891480 { int m(void*, void*, int, int); };
extern O_00891480 g_obj_00891480;
extern int g_tail_00891480;
void func_00891480()
{
    g_obj_00891480.m((void*)&g_00891480_0, (void*)&g_00891480_1, 400, 7);
    tail_fn_00891480(&g_tail_00891480);
}