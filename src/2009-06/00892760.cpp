// roc 2009-06 00892760  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892760
//
// 00892760  6810d28900           push 0x89d210
// 00892765  e89173e8ff           call 0x719afb
// 0089276a  59                   pop ecx
// 0089276b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892760;
extern void G1_func_00892760(void*);
void func_00892760()
{
    G1_func_00892760(&G2_func_00892760);
}
