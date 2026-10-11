// from server: 100% by colin
// roc 2008-06 007f1180  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1180
//
// 007f1180  6a04                 push 4
// 007f1182  68c0010000           push 0x1c0
// 007f1187  68e0248200           push 0x8224e0
// 007f118c  68fc248200           push 0x8224fc
// 007f1191  b90cfd9600           mov ecx, 0x96fd0c
// 007f1196  e88509caff           call 0x491b20
// 007f119b  6840b17f00           push 0x7fb140
// 007f11a0  e80a06ebff           call 0x6a17af
// 007f11a5  59                   pop ecx
// 007f11a6  c3                   ret 

extern int g_007f1180_0;
extern int g_007f1180_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1180(void*);
struct O_007f1180 { int m(void*, void*, int, int); };
extern O_007f1180 g_obj_007f1180;
extern int g_tail_007f1180;
void func_007f1180()
{
    g_obj_007f1180.m((void*)&g_007f1180_0, (void*)&g_007f1180_1, 448, 4);
    tail_fn_007f1180(&g_tail_007f1180);
}