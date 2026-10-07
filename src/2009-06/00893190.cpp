// roc 2009-06 00893190  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893190
//
// 00893190  6850d58900           push 0x89d550
// 00893195  e86169e8ff           call 0x719afb
// 0089319a  59                   pop ecx
// 0089319b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893190;
extern void G1_func_00893190(void*);
void func_00893190()
{
    G1_func_00893190(&G2_func_00893190);
}
