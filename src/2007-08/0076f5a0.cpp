// from server: 100% by colin
// roc 2007-08 0076f5a0  unit: seg_00760000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f5a0
//
// 0076f5a0  6a05                 push 5
// 0076f5a2  68f7000000           push 0xf7
// 0076f5a7  68dcd07900           push 0x79d0dc
// 0076f5ac  68d0d07900           push 0x79d0d0
// 0076f5b1  b940e88b00           mov ecx, 0x8be840
// 0076f5b6  e82550d3ff           call 0x4a45e0
// 0076f5bb  6890887700           push 0x778890
// 0076f5c0  e85e17ecff           call 0x630d23
// 0076f5c5  59                   pop ecx
// 0076f5c6  c3                   ret 

extern int g_0076f5a0_0;
extern int g_0076f5a0_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0076f5a0(void*);
struct O_0076f5a0 { int m(void*, void*, int, int); };
extern O_0076f5a0 g_obj_0076f5a0;
extern int g_tail_0076f5a0;
void func_0076f5a0()
{
    g_obj_0076f5a0.m((void*)&g_0076f5a0_0, (void*)&g_0076f5a0_1, 247, 5);
    tail_fn_0076f5a0(&g_tail_0076f5a0);
}