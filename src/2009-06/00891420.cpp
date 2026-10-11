// from server: 100% by colin
// roc 2009-06 00891420  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891420
//
// 00891420  6a07                 push 7
// 00891422  6884010000           push 0x184
// 00891427  68d0788e00           push 0x8e78d0
// 0089142c  68ec788e00           push 0x8e78ec
// 00891431  b934efa400           mov ecx, 0xa4ef34
// 00891436  e8c51de0ff           call 0x693200
// 0089143b  68c0c38900           push 0x89c3c0
// 00891440  e8b686e8ff           call 0x719afb
// 00891445  59                   pop ecx
// 00891446  c3                   ret 

extern int g_00891420_0;
extern int g_00891420_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891420(void*);
struct O_00891420 { int m(void*, void*, int, int); };
extern O_00891420 g_obj_00891420;
extern int g_tail_00891420;
void func_00891420()
{
    g_obj_00891420.m((void*)&g_00891420_0, (void*)&g_00891420_1, 388, 7);
    tail_fn_00891420(&g_tail_00891420);
}