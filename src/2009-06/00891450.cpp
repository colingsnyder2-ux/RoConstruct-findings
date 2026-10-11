// from server: 100% by colin
// roc 2009-06 00891450  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891450
//
// 00891450  6a07                 push 7
// 00891452  688c010000           push 0x18c
// 00891457  68fc788e00           push 0x8e78fc
// 0089145c  68f4788e00           push 0x8e78f4
// 00891461  b91cf0a400           mov ecx, 0xa4f01c
// 00891466  e8951de0ff           call 0x693200
// 0089146b  68e0c38900           push 0x89c3e0
// 00891470  e88686e8ff           call 0x719afb
// 00891475  59                   pop ecx
// 00891476  c3                   ret 

extern int g_00891450_0;
extern int g_00891450_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891450(void*);
struct O_00891450 { int m(void*, void*, int, int); };
extern O_00891450 g_obj_00891450;
extern int g_tail_00891450;
void func_00891450()
{
    g_obj_00891450.m((void*)&g_00891450_0, (void*)&g_00891450_1, 396, 7);
    tail_fn_00891450(&g_tail_00891450);
}