// roc 2009-06 00888930  unit: seg_00880000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00888930
//
// 00888930  6880648900           push 0x896480
// 00888935  e8c111e9ff           call 0x719afb
// 0088893a  59                   pop ecx
// 0088893b  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G2_func_00888930;
extern void G1_func_00888930(void*);
void func_00888930()
{
    G1_func_00888930(&G2_func_00888930);
}
