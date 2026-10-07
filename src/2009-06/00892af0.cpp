// roc 2009-06 00892af0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892af0
//
// 00892af0  6850d48900           push 0x89d450
// 00892af5  e80170e8ff           call 0x719afb
// 00892afa  59                   pop ecx
// 00892afb  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00892af0;
extern void G1_func_00892af0(void*);
void func_00892af0()
{
    G1_func_00892af0(&G2_func_00892af0);
}
