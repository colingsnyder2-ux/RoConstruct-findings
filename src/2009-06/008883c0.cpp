// roc 2009-06 008883c0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008883c0
//
// 008883c0  68805f8900           push 0x895f80
// 008883c5  e83117e9ff           call 0x719afb
// 008883ca  59                   pop ecx
// 008883cb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008883c0;
extern void G1_func_008883c0(void*);
void func_008883c0()
{
    G1_func_008883c0(&G2_func_008883c0);
}
