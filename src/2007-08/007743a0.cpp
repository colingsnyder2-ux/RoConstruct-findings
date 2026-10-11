// from server: 100% by colin
// roc 2007-08 007743a0  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007743a0
//
// 007743a0  6a05                 push 5
// 007743a2  68ac010000           push 0x1ac
// 007743a7  6840a87a00           push 0x7aa840
// 007743ac  68c0837b00           push 0x7b83c0
// 007743b1  b9bc5f8c00           mov ecx, 0x8c5fbc
// 007743b6  e8651de4ff           call 0x5b6120
// 007743bb  6800b87700           push 0x77b800
// 007743c0  e85ec9ebff           call 0x630d23
// 007743c5  59                   pop ecx
// 007743c6  c3                   ret 

extern int g_007743a0_0;
extern int g_007743a0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007743a0(void*);
struct O_007743a0 { int m(void*, void*, int, int); };
extern O_007743a0 g_obj_007743a0;
extern int g_tail_007743a0;
void func_007743a0()
{
    g_obj_007743a0.m((void*)&g_007743a0_0, (void*)&g_007743a0_1, 428, 5);
    tail_fn_007743a0(&g_tail_007743a0);
}