// from server: 100% by colin
// roc 2011-06 00a28b50  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28b50
//
// 00a28b50  6a00                 push 0
// 00a28b52  6a02                 push 2
// 00a28b54  6874020000           push 0x274
// 00a28b59  688064a900           push 0xa96480
// 00a28b5e  684440aa00           push 0xaa4044
// 00a28b63  b96801cd00           mov ecx, 0xcd0168
// 00a28b68  e8332cc8ff           call 0x6ab7a0
// 00a28b6d  6880c3a300           push 0xa3c380
// 00a28b72  e8e625deff           call 0x80b15d
// 00a28b77  59                   pop ecx
// 00a28b78  c3                   ret 

extern int g_00a28b50_0;
extern int g_00a28b50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28b50(void*);
struct O_00a28b50 { int m(void*, void*, int, int, int); };
extern O_00a28b50 g_obj_00a28b50;
extern int g_tail_00a28b50;
void func_00a28b50()
{
    g_obj_00a28b50.m((void*)&g_00a28b50_0, (void*)&g_00a28b50_1, 628, 2, 0);
    tail_fn_00a28b50(&g_tail_00a28b50);
}