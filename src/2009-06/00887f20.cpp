// from server: 100% by colin
// roc 2009-06 00887f20  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887f20
//
// 00887f20  6a07                 push 7
// 00887f22  688d000000           push 0x8d
// 00887f27  68845e8c00           push 0x8c5e84
// 00887f2c  68745e8c00           push 0x8c5e74
// 00887f31  b944eda300           mov ecx, 0xa3ed44
// 00887f36  e875d6c4ff           call 0x4d55b0
// 00887f3b  68f05c8900           push 0x895cf0
// 00887f40  e8b61be9ff           call 0x719afb
// 00887f45  59                   pop ecx
// 00887f46  c3                   ret 

extern int g_00887f20_0;
extern int g_00887f20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887f20(void*);
struct O_00887f20 { int m(void*, void*, int, int); };
extern O_00887f20 g_obj_00887f20;
extern int g_tail_00887f20;
void func_00887f20()
{
    g_obj_00887f20.m((void*)&g_00887f20_0, (void*)&g_00887f20_1, 141, 7);
    tail_fn_00887f20(&g_tail_00887f20);
}