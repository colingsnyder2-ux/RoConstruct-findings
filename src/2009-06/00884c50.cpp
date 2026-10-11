// from server: 100% by colin
// roc 2009-06 00884c50  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884c50
//
// 00884c50  6a07                 push 7
// 00884c52  68ac000000           push 0xac
// 00884c57  680c608b00           push 0x8b600c
// 00884c5c  6838608b00           push 0x8b6038
// 00884c61  b99ca4a300           mov ecx, 0xa3a49c
// 00884c66  e8259cbbff           call 0x43e890
// 00884c6b  6830448900           push 0x894430
// 00884c70  e8864ee9ff           call 0x719afb
// 00884c75  59                   pop ecx
// 00884c76  c3                   ret 

extern int g_00884c50_0;
extern int g_00884c50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884c50(void*);
struct O_00884c50 { int m(void*, void*, int, int); };
extern O_00884c50 g_obj_00884c50;
extern int g_tail_00884c50;
void func_00884c50()
{
    g_obj_00884c50.m((void*)&g_00884c50_0, (void*)&g_00884c50_1, 172, 7);
    tail_fn_00884c50(&g_tail_00884c50);
}