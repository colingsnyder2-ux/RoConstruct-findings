// from server: 100% by colin
// roc 2009-06 00884c20  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00884c20
//
// 00884c20  6a07                 push 7
// 00884c22  6890000000           push 0x90
// 00884c27  680c608b00           push 0x8b600c
// 00884c2c  6830608b00           push 0x8b6030
// 00884c31  b980a4a300           mov ecx, 0xa3a480
// 00884c36  e8859bbbff           call 0x43e7c0
// 00884c3b  6850448900           push 0x894450
// 00884c40  e8b64ee9ff           call 0x719afb
// 00884c45  59                   pop ecx
// 00884c46  c3                   ret 

extern int g_00884c20_0;
extern int g_00884c20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00884c20(void*);
struct O_00884c20 { int m(void*, void*, int, int); };
extern O_00884c20 g_obj_00884c20;
extern int g_tail_00884c20;
void func_00884c20()
{
    g_obj_00884c20.m((void*)&g_00884c20_0, (void*)&g_00884c20_1, 144, 7);
    tail_fn_00884c20(&g_tail_00884c20);
}