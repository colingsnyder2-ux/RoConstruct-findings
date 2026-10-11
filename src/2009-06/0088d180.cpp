// from server: 100% by colin
// roc 2009-06 0088d180  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088d180
//
// 0088d180  6a07                 push 7
// 0088d182  6858010000           push 0x158
// 0088d187  681ca98d00           push 0x8da91c
// 0088d18c  6814a98d00           push 0x8da914
// 0088d191  b9a8b7a400           mov ecx, 0xa4b7a8
// 0088d196  e825b4d9ff           call 0x6285c0
// 0088d19b  68b09d8900           push 0x899db0
// 0088d1a0  e856c9e8ff           call 0x719afb
// 0088d1a5  59                   pop ecx
// 0088d1a6  c3                   ret 

extern int g_0088d180_0;
extern int g_0088d180_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088d180(void*);
struct O_0088d180 { int m(void*, void*, int, int); };
extern O_0088d180 g_obj_0088d180;
extern int g_tail_0088d180;
void func_0088d180()
{
    g_obj_0088d180.m((void*)&g_0088d180_0, (void*)&g_0088d180_1, 344, 7);
    tail_fn_0088d180(&g_tail_0088d180);
}