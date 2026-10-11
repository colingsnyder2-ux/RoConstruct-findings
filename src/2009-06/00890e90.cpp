// from server: 100% by colin
// roc 2009-06 00890e90  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890e90
//
// 00890e90  6a07                 push 7
// 00890e92  682c010000           push 0x12c
// 00890e97  68e0a88d00           push 0x8da8e0
// 00890e9c  68f45d8e00           push 0x8e5df4
// 00890ea1  b948e7a400           mov ecx, 0xa4e748
// 00890ea6  e8d508dfff           call 0x681780
// 00890eab  6840bf8900           push 0x89bf40
// 00890eb0  e8468ce8ff           call 0x719afb
// 00890eb5  59                   pop ecx
// 00890eb6  c3                   ret 

extern int g_00890e90_0;
extern int g_00890e90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890e90(void*);
struct O_00890e90 { int m(void*, void*, int, int); };
extern O_00890e90 g_obj_00890e90;
extern int g_tail_00890e90;
void func_00890e90()
{
    g_obj_00890e90.m((void*)&g_00890e90_0, (void*)&g_00890e90_1, 300, 7);
    tail_fn_00890e90(&g_tail_00890e90);
}