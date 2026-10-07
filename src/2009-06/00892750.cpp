// roc 2009-06 00892750  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892750
//
// 00892750  6820d18900           push 0x89d120
// 00892755  e8a173e8ff           call 0x719afb
// 0089275a  59                   pop ecx
// 0089275b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892750;
extern void G1_func_00892750(void*);
void func_00892750()
{
    G1_func_00892750(&G2_func_00892750);
}
