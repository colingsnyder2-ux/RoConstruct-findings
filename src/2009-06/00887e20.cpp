// from server: 100% by colin
// roc 2009-06 00887e20  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887e20
//
// 00887e20  6a07                 push 7
// 00887e22  68b8000000           push 0xb8
// 00887e27  68305d8c00           push 0x8c5d30
// 00887e2c  68105e8c00           push 0x8c5e10
// 00887e31  b9f0eca300           mov ecx, 0xa3ecf0
// 00887e36  e835d5c4ff           call 0x4d5370
// 00887e3b  68505c8900           push 0x895c50
// 00887e40  e8b61ce9ff           call 0x719afb
// 00887e45  59                   pop ecx
// 00887e46  c3                   ret 

extern int g_00887e20_0;
extern int g_00887e20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887e20(void*);
struct O_00887e20 { int m(void*, void*, int, int); };
extern O_00887e20 g_obj_00887e20;
extern int g_tail_00887e20;
void func_00887e20()
{
    g_obj_00887e20.m((void*)&g_00887e20_0, (void*)&g_00887e20_1, 184, 7);
    tail_fn_00887e20(&g_tail_00887e20);
}