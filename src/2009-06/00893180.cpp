// roc 2009-06 00893180  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893180
//
// 00893180  6810d58900           push 0x89d510
// 00893185  e87169e8ff           call 0x719afb
// 0089318a  59                   pop ecx
// 0089318b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893180;
extern void G1_func_00893180(void*);
void func_00893180()
{
    G1_func_00893180(&G2_func_00893180);
}
