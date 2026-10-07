// roc 2009-06 0089adf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089adf0
//
// 0089adf0  a14cd3a400           mov eax, dword ptr [0xa4d34c]
// 0089adf5  50                   push eax
// 0089adf6  e837dce7ff           call 0x718a32
// 0089adfb  83c404               add esp, 4
// 0089adfe  c70534d3a40030d28a00 mov dword ptr [0xa4d334], 0x8ad230
// 0089ae08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089adf0(int);
void func_0089adf0()
{
    G4_func_0089adf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
