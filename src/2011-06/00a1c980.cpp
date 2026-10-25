// from server: 100% by colin
// roc 2011-06 00a1c980  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c980
//
// 00a1c980  6a00                 push 0
// 00a1c982  68d0a4a800           push 0xa8a4d0
// 00a1c987  681c87a700           push 0xa7871c
// 00a1c98c  68c8a4a800           push 0xa8a4c8
// 00a1c991  68d4000000           push 0xd4
// 00a1c996  b9a4c1cb00           mov ecx, 0xcbc1a4
// 00a1c99b  e8e0dab7ff           call 0x59a480
// 00a1c9a0  684051a300           push 0xa35140
// 00a1c9a5  e8b3e7deff           call 0x80b15d
// 00a1c9aa  59                   pop ecx
// 00a1c9ab  c3                   ret 

extern int g_00a1c980_1;
extern int g_00a1c980_2;
extern int g_00a1c980_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c980(void*);
struct O_00a1c980 { int m(int, void*, void*, void*, int); };
extern O_00a1c980 g_obj_00a1c980;
extern int g_tail_00a1c980;
void func_00a1c980()
{
    g_obj_00a1c980.m(212, (void*)&g_00a1c980_1, (void*)&g_00a1c980_2, (void*)&g_00a1c980_3, 0);
    tail_fn_00a1c980(&g_tail_00a1c980);
}