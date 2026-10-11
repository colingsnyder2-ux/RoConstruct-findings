// from server: 100% by colin
// roc 2009-06 00891390  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00891390
//
// 00891390  6a07                 push 7
// 00891392  6888010000           push 0x188
// 00891397  68d0788e00           push 0x8e78d0
// 0089139c  68c4788e00           push 0x8e78c4
// 008913a1  b918efa400           mov ecx, 0xa4ef18
// 008913a6  e8551ee0ff           call 0x693200
// 008913ab  6860c68900           push 0x89c660
// 008913b0  e84687e8ff           call 0x719afb
// 008913b5  59                   pop ecx
// 008913b6  c3                   ret 

extern int g_00891390_0;
extern int g_00891390_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00891390(void*);
struct O_00891390 { int m(void*, void*, int, int); };
extern O_00891390 g_obj_00891390;
extern int g_tail_00891390;
void func_00891390()
{
    g_obj_00891390.m((void*)&g_00891390_0, (void*)&g_00891390_1, 392, 7);
    tail_fn_00891390(&g_tail_00891390);
}