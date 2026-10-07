// roc 2009-06 00893870  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893870
//
// 00893870  68c0d68900           push 0x89d6c0
// 00893875  e88162e8ff           call 0x719afb
// 0089387a  59                   pop ecx
// 0089387b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00893870;
extern void G1_func_00893870(void*);
void func_00893870()
{
    G1_func_00893870(&G2_func_00893870);
}
