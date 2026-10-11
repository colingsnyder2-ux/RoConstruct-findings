// from server: 100% by colin
// roc 2009-06 00888060  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888060
//
// 00888060  6a07                 push 7
// 00888062  68a8000000           push 0xa8
// 00888067  68c05e8c00           push 0x8c5ec0
// 0088806c  68f45e8c00           push 0x8c5ef4
// 00888071  b90ceda300           mov ecx, 0xa3ed0c
// 00888076  e825d2c4ff           call 0x4d52a0
// 0088807b  68d05b8900           push 0x895bd0
// 00888080  e8761ae9ff           call 0x719afb
// 00888085  59                   pop ecx
// 00888086  c3                   ret 

extern int g_00888060_0;
extern int g_00888060_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00888060(void*);
struct O_00888060 { int m(void*, void*, int, int); };
extern O_00888060 g_obj_00888060;
extern int g_tail_00888060;
void func_00888060()
{
    g_obj_00888060.m((void*)&g_00888060_0, (void*)&g_00888060_1, 168, 7);
    tail_fn_00888060(&g_tail_00888060);
}