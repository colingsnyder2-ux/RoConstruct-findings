// from server: 100% by colin
// roc 2009-06 0088e040  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e040
//
// 0088e040  6a07                 push 7
// 0088e042  6895000000           push 0x95
// 0088e047  6840938b00           push 0x8b9340
// 0088e04c  6868f68d00           push 0x8df668
// 0088e051  b950c4a400           mov ecx, 0xa4c450
// 0088e056  e8b5eedbff           call 0x64cf10
// 0088e05b  6840a68900           push 0x89a640
// 0088e060  e896bae8ff           call 0x719afb
// 0088e065  59                   pop ecx
// 0088e066  c3                   ret 

extern int g_0088e040_0;
extern int g_0088e040_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088e040(void*);
struct O_0088e040 { int m(void*, void*, int, int); };
extern O_0088e040 g_obj_0088e040;
extern int g_tail_0088e040;
void func_0088e040()
{
    g_obj_0088e040.m((void*)&g_0088e040_0, (void*)&g_0088e040_1, 149, 7);
    tail_fn_0088e040(&g_tail_0088e040);
}