// roc 2009-06 00893250  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893250
//
// 00893250  68b0d58900           push 0x89d5b0
// 00893255  e8a168e8ff           call 0x719afb
// 0089325a  59                   pop ecx
// 0089325b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893250;
extern void G1_func_00893250(void*);
void func_00893250()
{
    G1_func_00893250(&G2_func_00893250);
}
