// from server: 100% by colin
// roc 2007-08 0076f6f0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f6f0
//
// 0076f6f0  6a05                 push 5
// 0076f6f2  68f8000000           push 0xf8
// 0076f6f7  6870d17900           push 0x79d170
// 0076f6fc  6858d17900           push 0x79d158
// 0076f701  b924e88b00           mov ecx, 0x8be824
// 0076f706  e8b54fd3ff           call 0x4a46c0
// 0076f70b  6850887700           push 0x778850
// 0076f710  e80e16ecff           call 0x630d23
// 0076f715  59                   pop ecx
// 0076f716  c3                   ret 

extern int g_0076f6f0_0;
extern int g_0076f6f0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f6f0(void*);
struct O_0076f6f0 { int m(void*, void*, int, int); };
extern O_0076f6f0 g_obj_0076f6f0;
extern int g_tail_0076f6f0;
void func_0076f6f0()
{
    g_obj_0076f6f0.m((void*)&g_0076f6f0_0, (void*)&g_0076f6f0_1, 248, 5);
    tail_fn_0076f6f0(&g_tail_0076f6f0);
}