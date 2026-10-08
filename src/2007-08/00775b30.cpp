// roc 2007-08 00775b30  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775b30
//
// 00775b30  689c7e8c00           push 0x8c7e9c
// 00775b35  e8d60ce1ff           call 0x586810
// 00775b3a  59                   pop ecx
// 00775b3b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00775b30;
extern void G1_func_00775b30(void*);
void func_00775b30()
{
    G1_func_00775b30(&G2_func_00775b30);
}
