// from server: 100% by colin
// roc 2009-06 0088da30  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088da30
//
// 0088da30  6a07                 push 7
// 0088da32  68c4000000           push 0xc4
// 0088da37  68d0508d00           push 0x8d50d0
// 0088da3c  687ced8d00           push 0x8ded7c
// 0088da41  b938bda400           mov ecx, 0xa4bd38
// 0088da46  e83589dbff           call 0x646380
// 0088da4b  68e0a18900           push 0x89a1e0
// 0088da50  e8a6c0e8ff           call 0x719afb
// 0088da55  59                   pop ecx
// 0088da56  c3                   ret 

extern int g_0088da30_0;
extern int g_0088da30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088da30(void*);
struct O_0088da30 { int m(void*, void*, int, int); };
extern O_0088da30 g_obj_0088da30;
extern int g_tail_0088da30;
void func_0088da30()
{
    g_obj_0088da30.m((void*)&g_0088da30_0, (void*)&g_0088da30_1, 196, 7);
    tail_fn_0088da30(&g_tail_0088da30);
}