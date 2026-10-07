// roc 2009-06 008880d0  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008880d0
//
// 008880d0  68205d8900           push 0x895d20
// 008880d5  e8211ae9ff           call 0x719afb
// 008880da  59                   pop ecx
// 008880db  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_008880d0;
extern void G1_func_008880d0(void*);
void func_008880d0()
{
    G1_func_008880d0(&G2_func_008880d0);
}
