// from server: 100% by colin
// roc 2009-06 00888030  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888030
//
// 00888030  6a07                 push 7
// 00888032  68a0000000           push 0xa0
// 00888037  68c05e8c00           push 0x8c5ec0
// 0088803c  68d85e8c00           push 0x8c5ed8
// 00888041  b99ceca300           mov ecx, 0xa3ec9c
// 00888046  e865d5c4ff           call 0x4d55b0
// 0088804b  68705b8900           push 0x895b70
// 00888050  e8a61ae9ff           call 0x719afb
// 00888055  59                   pop ecx
// 00888056  c3                   ret 

extern int g_00888030_0;
extern int g_00888030_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00888030(void*);
struct O_00888030 { int m(void*, void*, int, int); };
extern O_00888030 g_obj_00888030;
extern int g_tail_00888030;
void func_00888030()
{
    g_obj_00888030.m((void*)&g_00888030_0, (void*)&g_00888030_1, 160, 7);
    tail_fn_00888030(&g_tail_00888030);
}