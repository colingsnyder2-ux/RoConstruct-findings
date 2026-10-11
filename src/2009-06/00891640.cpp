// from server: 100% by colin
// roc 2009-06 00891640  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891640
//
// 00891640  6a07                 push 7
// 00891642  6864010000           push 0x164
// 00891647  689c788e00           push 0x8e789c
// 0089164c  6854798e00           push 0x8e7954
// 00891651  b9fcf0a400           mov ecx, 0xa4f0fc
// 00891656  e8e51ee0ff           call 0x693540
// 0089165b  68c0c68900           push 0x89c6c0
// 00891660  e89684e8ff           call 0x719afb
// 00891665  59                   pop ecx
// 00891666  c3                   ret 

extern int g_00891640_0;
extern int g_00891640_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891640(void*);
struct O_00891640 { int m(void*, void*, int, int); };
extern O_00891640 g_obj_00891640;
extern int g_tail_00891640;
void func_00891640()
{
    g_obj_00891640.m((void*)&g_00891640_0, (void*)&g_00891640_1, 356, 7);
    tail_fn_00891640(&g_tail_00891640);
}