// from server: 100% by colin
// roc 2009-06 008913c0  unit: seg_00890000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008913c0
//
// 008913c0  6a07                 push 7
// 008913c2  687c010000           push 0x17c
// 008913c7  68d0788e00           push 0x8e78d0
// 008913cc  68d8788e00           push 0x8e78d8
// 008913d1  b984eda400           mov ecx, 0xa4ed84
// 008913d6  e8251ee0ff           call 0x693200
// 008913db  6880c38900           push 0x89c380
// 008913e0  e81687e8ff           call 0x719afb
// 008913e5  59                   pop ecx
// 008913e6  c3                   ret 

extern int g_008913c0_0;
extern int g_008913c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008913c0(void*);
struct O_008913c0 { int m(void*, void*, int, int); };
extern O_008913c0 g_obj_008913c0;
extern int g_tail_008913c0;
void func_008913c0()
{
    g_obj_008913c0.m((void*)&g_008913c0_0, (void*)&g_008913c0_1, 380, 7);
    tail_fn_008913c0(&g_tail_008913c0);
}