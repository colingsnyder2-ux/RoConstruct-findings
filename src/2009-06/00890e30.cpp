// from server: 100% by colin
// roc 2009-06 00890e30  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890e30
//
// 00890e30  6a07                 push 7
// 00890e32  68ec000000           push 0xec
// 00890e37  68e0a88d00           push 0x8da8e0
// 00890e3c  68dc5d8e00           push 0x8e5ddc
// 00890e41  b910e7a400           mov ecx, 0xa4e710
// 00890e46  e83509dfff           call 0x681780
// 00890e4b  6800bf8900           push 0x89bf00
// 00890e50  e8a68ce8ff           call 0x719afb
// 00890e55  59                   pop ecx
// 00890e56  c3                   ret 

extern int g_00890e30_0;
extern int g_00890e30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890e30(void*);
struct O_00890e30 { int m(void*, void*, int, int); };
extern O_00890e30 g_obj_00890e30;
extern int g_tail_00890e30;
void func_00890e30()
{
    g_obj_00890e30.m((void*)&g_00890e30_0, (void*)&g_00890e30_1, 236, 7);
    tail_fn_00890e30(&g_tail_00890e30);
}