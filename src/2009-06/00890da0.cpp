// from server: 100% by colin
// roc 2009-06 00890da0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890da0
//
// 00890da0  6a07                 push 7
// 00890da2  688c000000           push 0x8c
// 00890da7  68e0a88d00           push 0x8da8e0
// 00890dac  68b85d8e00           push 0x8e5db8
// 00890db1  b964e7a400           mov ecx, 0xa4e764
// 00890db6  e8c509dfff           call 0x681780
// 00890dbb  6880bf8900           push 0x89bf80
// 00890dc0  e8368de8ff           call 0x719afb
// 00890dc5  59                   pop ecx
// 00890dc6  c3                   ret 

extern int g_00890da0_0;
extern int g_00890da0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890da0(void*);
struct O_00890da0 { int m(void*, void*, int, int); };
extern O_00890da0 g_obj_00890da0;
extern int g_tail_00890da0;
void func_00890da0()
{
    g_obj_00890da0.m((void*)&g_00890da0_0, (void*)&g_00890da0_1, 140, 7);
    tail_fn_00890da0(&g_tail_00890da0);
}