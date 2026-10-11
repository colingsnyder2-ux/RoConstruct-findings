// from server: 100% by colin
// roc 2007-08 0076eb20  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076eb20
//
// 0076eb20  6a04                 push 4
// 0076eb22  6859010000           push 0x159
// 0076eb27  6898b67900           push 0x79b698
// 0076eb2c  68c4b67900           push 0x79b6c4
// 0076eb31  b910de8b00           mov ecx, 0x8bde10
// 0076eb36  e835f2d1ff           call 0x48dd70
// 0076eb3b  6850807700           push 0x778050
// 0076eb40  e8de21ecff           call 0x630d23
// 0076eb45  59                   pop ecx
// 0076eb46  c3                   ret 

extern int g_0076eb20_0;
extern int g_0076eb20_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076eb20(void*);
struct O_0076eb20 { int m(void*, void*, int, int); };
extern O_0076eb20 g_obj_0076eb20;
extern int g_tail_0076eb20;
void func_0076eb20()
{
    g_obj_0076eb20.m((void*)&g_0076eb20_0, (void*)&g_0076eb20_1, 345, 4);
    tail_fn_0076eb20(&g_tail_0076eb20);
}