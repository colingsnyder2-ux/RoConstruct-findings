// from server: 100% by colin
// roc 2009-06 00884b90  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884b90
//
// 00884b90  6a07                 push 7
// 00884b92  688c000000           push 0x8c
// 00884b97  680c608b00           push 0x8b600c
// 00884b9c  6800608b00           push 0x8b6000
// 00884ba1  b92ca4a300           mov ecx, 0xa3a42c
// 00884ba6  e8459bbbff           call 0x43e6f0
// 00884bab  68f0438900           push 0x8943f0
// 00884bb0  e8464fe9ff           call 0x719afb
// 00884bb5  59                   pop ecx
// 00884bb6  c3                   ret 

extern int g_00884b90_0;
extern int g_00884b90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884b90(void*);
struct O_00884b90 { int m(void*, void*, int, int); };
extern O_00884b90 g_obj_00884b90;
extern int g_tail_00884b90;
void func_00884b90()
{
    g_obj_00884b90.m((void*)&g_00884b90_0, (void*)&g_00884b90_1, 140, 7);
    tail_fn_00884b90(&g_tail_00884b90);
}