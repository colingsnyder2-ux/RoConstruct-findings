// from server: 100% by colin
// roc 2011-06 00a2b000  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b000
//
// 00a2b000  6a00                 push 0
// 00a2b002  6a1f                 push 0x1f
// 00a2b004  6890000000           push 0x90
// 00a2b009  686862a600           push 0xa66268
// 00a2b00e  68e0a2aa00           push 0xaaa2e0
// 00a2b013  b9a025cd00           mov ecx, 0xcd25a0
// 00a2b018  e873bbccff           call 0x6f6b90
// 00a2b01d  68c0d8a300           push 0xa3d8c0
// 00a2b022  e83601deff           call 0x80b15d
// 00a2b027  59                   pop ecx
// 00a2b028  c3                   ret 

extern int g_00a2b000_0;
extern int g_00a2b000_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b000(void*);
struct O_00a2b000 { int m(void*, void*, int, int, int); };
extern O_00a2b000 g_obj_00a2b000;
extern int g_tail_00a2b000;
void func_00a2b000()
{
    g_obj_00a2b000.m((void*)&g_00a2b000_0, (void*)&g_00a2b000_1, 144, 31, 0);
    tail_fn_00a2b000(&g_tail_00a2b000);
}