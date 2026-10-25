// from server: 100% by colin
// roc 2011-06 00a2d370  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2d370
//
// 00a2d370  6a1f                 push 0x1f
// 00a2d372  68f0e97500           push 0x75e9f0
// 00a2d377  68b0e87500           push 0x75e8b0
// 00a2d37c  682074a700           push 0xa77420
// 00a2d381  681c22ab00           push 0xab221c
// 00a2d386  b9c83ecd00           mov ecx, 0xcd3ec8
// 00a2d38b  e8e02ccfff           call 0x720070
// 00a2d390  6800eba300           push 0xa3eb00
// 00a2d395  e8c3ddddff           call 0x80b15d
// 00a2d39a  59                   pop ecx
// 00a2d39b  c3                   ret 

extern int g_00a2d370_0;
extern int g_00a2d370_1;
extern int g_00a2d370_2;
extern int g_00a2d370_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2d370(void*);
struct O_00a2d370 { int m(void*, void*, void*, void*, int); };
extern O_00a2d370 g_obj_00a2d370;
extern int g_tail_00a2d370;
void func_00a2d370()
{
    g_obj_00a2d370.m((void*)&g_00a2d370_0, (void*)&g_00a2d370_1, (void*)&g_00a2d370_2, (void*)&g_00a2d370_3, 31);
    tail_fn_00a2d370(&g_tail_00a2d370);
}