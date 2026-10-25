// from server: 100% by colin
// roc 2011-06 00a2b060  unit: seg_00a20000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b060
//
// 00a2b060  6a00                 push 0
// 00a2b062  68d086a700           push 0xa786d0
// 00a2b067  68fca2aa00           push 0xaaa2fc
// 00a2b06c  68f4a2aa00           push 0xaaa2f4
// 00a2b071  68b8000000           push 0xb8
// 00a2b076  b9e025cd00           mov ecx, 0xcd25e0
// 00a2b07b  e8c0c0ccff           call 0x6f7140
// 00a2b080  6800d9a300           push 0xa3d900
// 00a2b085  e8d300deff           call 0x80b15d
// 00a2b08a  59                   pop ecx
// 00a2b08b  c3                   ret 

extern int g_00a2b060_1;
extern int g_00a2b060_2;
extern int g_00a2b060_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b060(void*);
struct O_00a2b060 { int m(int, void*, void*, void*, int); };
extern O_00a2b060 g_obj_00a2b060;
extern int g_tail_00a2b060;
void func_00a2b060()
{
    g_obj_00a2b060.m(184, (void*)&g_00a2b060_1, (void*)&g_00a2b060_2, (void*)&g_00a2b060_3, 0);
    tail_fn_00a2b060(&g_tail_00a2b060);
}