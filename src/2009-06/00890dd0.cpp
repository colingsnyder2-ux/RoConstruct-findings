// from server: 100% by colin
// roc 2009-06 00890dd0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00890dd0
//
// 00890dd0  6a07                 push 7
// 00890dd2  68ac000000           push 0xac
// 00890dd7  68e0a88d00           push 0x8da8e0
// 00890ddc  68c45d8e00           push 0x8e5dc4
// 00890de1  b9f4e6a400           mov ecx, 0xa4e6f4
// 00890de6  e89509dfff           call 0x681780
// 00890deb  6860bf8900           push 0x89bf60
// 00890df0  e8068de8ff           call 0x719afb
// 00890df5  59                   pop ecx
// 00890df6  c3                   ret 

extern int g_00890dd0_0;
extern int g_00890dd0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00890dd0(void*);
struct O_00890dd0 { int m(void*, void*, int, int); };
extern O_00890dd0 g_obj_00890dd0;
extern int g_tail_00890dd0;
void func_00890dd0()
{
    g_obj_00890dd0.m((void*)&g_00890dd0_0, (void*)&g_00890dd0_1, 172, 7);
    tail_fn_00890dd0(&g_tail_00890dd0);
}