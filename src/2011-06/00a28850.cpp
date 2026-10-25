// from server: 100% by colin
// roc 2011-06 00a28850  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28850
//
// 00a28850  6a00                 push 0
// 00a28852  6a02                 push 2
// 00a28854  682c010000           push 0x12c
// 00a28859  688064a900           push 0xa96480
// 00a2885e  68283faa00           push 0xaa3f28
// 00a28863  b93006cd00           mov ecx, 0xcd0630
// 00a28868  e8f32dc8ff           call 0x6ab660
// 00a2886d  68e0c2a300           push 0xa3c2e0
// 00a28872  e8e628deff           call 0x80b15d
// 00a28877  59                   pop ecx
// 00a28878  c3                   ret 

extern int g_00a28850_0;
extern int g_00a28850_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28850(void*);
struct O_00a28850 { int m(void*, void*, int, int, int); };
extern O_00a28850 g_obj_00a28850;
extern int g_tail_00a28850;
void func_00a28850()
{
    g_obj_00a28850.m((void*)&g_00a28850_0, (void*)&g_00a28850_1, 300, 2, 0);
    tail_fn_00a28850(&g_tail_00a28850);
}