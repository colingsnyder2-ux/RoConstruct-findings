// from server: 100% by colin
// roc 2009-06 00888090  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888090
//
// 00888090  6a07                 push 7
// 00888092  68ac000000           push 0xac
// 00888097  68185f8c00           push 0x8c5f18
// 0088809c  68085f8c00           push 0x8c5f08
// 008880a1  b9d4eca300           mov ecx, 0xa3ecd4
// 008880a6  e8f5d1c4ff           call 0x4d52a0
// 008880ab  68f05b8900           push 0x895bf0
// 008880b0  e8461ae9ff           call 0x719afb
// 008880b5  59                   pop ecx
// 008880b6  c3                   ret 

extern int g_00888090_0;
extern int g_00888090_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00888090(void*);
struct O_00888090 { int m(void*, void*, int, int); };
extern O_00888090 g_obj_00888090;
extern int g_tail_00888090;
void func_00888090()
{
    g_obj_00888090.m((void*)&g_00888090_0, (void*)&g_00888090_1, 172, 7);
    tail_fn_00888090(&g_tail_00888090);
}