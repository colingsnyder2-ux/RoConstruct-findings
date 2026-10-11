// from server: 100% by colin
// roc 2009-06 00889d00  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889d00
//
// 00889d00  68e0518d00           push 0x8d51e0
// 00889d05  6894518d00           push 0x8d5194
// 00889d0a  68d0518d00           push 0x8d51d0
// 00889d0f  6884000000           push 0x84
// 00889d14  b9c03fa400           mov ecx, 0xa43fc0
// 00889d19  e81276d4ff           call 0x5d1330
// 00889d1e  6830758900           push 0x897530
// 00889d23  e8d3fde8ff           call 0x719afb
// 00889d28  59                   pop ecx
// 00889d29  c3                   ret 

extern int g_00889d00_1;
extern int g_00889d00_2;
extern int g_00889d00_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00889d00(void*);
struct O_00889d00 { int m(int, void*, void*, void*); };
extern O_00889d00 g_obj_00889d00;
extern int g_tail_00889d00;
void func_00889d00()
{
    g_obj_00889d00.m(132, (void*)&g_00889d00_1, (void*)&g_00889d00_2, (void*)&g_00889d00_3);
    tail_fn_00889d00(&g_tail_00889d00);
}