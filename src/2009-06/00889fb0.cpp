// from server: 100% by colin
// roc 2009-06 00889fb0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889fb0
//
// 00889fb0  6a07                 push 7
// 00889fb2  6895000000           push 0x95
// 00889fb7  68584e8c00           push 0x8c4e58
// 00889fbc  68c0568d00           push 0x8d56c0
// 00889fc1  b9ac44a400           mov ecx, 0xa444ac
// 00889fc6  e875e8d4ff           call 0x5d8840
// 00889fcb  68b0778900           push 0x8977b0
// 00889fd0  e826fbe8ff           call 0x719afb
// 00889fd5  59                   pop ecx
// 00889fd6  c3                   ret 

extern int g_00889fb0_0;
extern int g_00889fb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00889fb0(void*);
struct O_00889fb0 { int m(void*, void*, int, int); };
extern O_00889fb0 g_obj_00889fb0;
extern int g_tail_00889fb0;
void func_00889fb0()
{
    g_obj_00889fb0.m((void*)&g_00889fb0_0, (void*)&g_00889fb0_1, 149, 7);
    tail_fn_00889fb0(&g_tail_00889fb0);
}