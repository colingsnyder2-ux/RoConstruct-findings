// from server: 100% by colin
// roc 2009-06 00889980  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889980
//
// 00889980  6a07                 push 7
// 00889982  689a000000           push 0x9a
// 00889987  68004e8d00           push 0x8d4e00
// 0088998c  682c4e8d00           push 0x8d4e2c
// 00889991  b9a836a400           mov ecx, 0xa436a8
// 00889996  e82519d4ff           call 0x5cb2c0
// 0088999b  68c06f8900           push 0x896fc0
// 008899a0  e85601e9ff           call 0x719afb
// 008899a5  59                   pop ecx
// 008899a6  c3                   ret 

extern int g_00889980_0;
extern int g_00889980_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00889980(void*);
struct O_00889980 { int m(void*, void*, int, int); };
extern O_00889980 g_obj_00889980;
extern int g_tail_00889980;
void func_00889980()
{
    g_obj_00889980.m((void*)&g_00889980_0, (void*)&g_00889980_1, 154, 7);
    tail_fn_00889980(&g_tail_00889980);
}