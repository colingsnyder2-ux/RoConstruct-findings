// roc 2009-06 008887d0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008887d0
//
// 008887d0  6830638900           push 0x896330
// 008887d5  e82113e9ff           call 0x719afb
// 008887da  59                   pop ecx
// 008887db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008887d0;
extern void G1_func_008887d0(void*);
void func_008887d0()
{
    G1_func_008887d0(&G2_func_008887d0);
}
