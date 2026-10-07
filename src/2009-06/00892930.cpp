// roc 2009-06 00892930  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892930
//
// 00892930  6890d28900           push 0x89d290
// 00892935  e8c171e8ff           call 0x719afb
// 0089293a  59                   pop ecx
// 0089293b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892930;
extern void G1_func_00892930(void*);
void func_00892930()
{
    G1_func_00892930(&G2_func_00892930);
}
