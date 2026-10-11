// from server: 100% by colin
// roc 2007-08 0076f600  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f600
//
// 0076f600  6a05                 push 5
// 0076f602  68f5000000           push 0xf5
// 0076f607  68dcd07900           push 0x79d0dc
// 0076f60c  68f8d07900           push 0x79d0f8
// 0076f611  b9b0e88b00           mov ecx, 0x8be8b0
// 0076f616  e8c54fd3ff           call 0x4a45e0
// 0076f61b  68f0877700           push 0x7787f0
// 0076f620  e8fe16ecff           call 0x630d23
// 0076f625  59                   pop ecx
// 0076f626  c3                   ret 

extern int g_0076f600_0;
extern int g_0076f600_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f600(void*);
struct O_0076f600 { int m(void*, void*, int, int); };
extern O_0076f600 g_obj_0076f600;
extern int g_tail_0076f600;
void func_0076f600()
{
    g_obj_0076f600.m((void*)&g_0076f600_0, (void*)&g_0076f600_1, 245, 5);
    tail_fn_0076f600(&g_tail_0076f600);
}