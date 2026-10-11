// from server: 100% by colin
// roc 2009-06 00892000  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892000
//
// 00892000  6a07                 push 7
// 00892002  68a4000000           push 0xa4
// 00892007  68584e8c00           push 0x8c4e58
// 0089200c  68bc138b00           push 0x8b13bc
// 00892011  b980f7a400           mov ecx, 0xa4f780
// 00892016  e8a5ebe0ff           call 0x6a0bc0
// 0089201b  68d0cb8900           push 0x89cbd0
// 00892020  e8d67ae8ff           call 0x719afb
// 00892025  59                   pop ecx
// 00892026  c3                   ret 

extern int g_00892000_0;
extern int g_00892000_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00892000(void*);
struct O_00892000 { int m(void*, void*, int, int); };
extern O_00892000 g_obj_00892000;
extern int g_tail_00892000;
void func_00892000()
{
    g_obj_00892000.m((void*)&g_00892000_0, (void*)&g_00892000_1, 164, 7);
    tail_fn_00892000(&g_tail_00892000);
}