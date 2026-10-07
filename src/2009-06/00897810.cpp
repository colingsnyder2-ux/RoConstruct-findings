// roc 2009-06 00897810  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897810
//
// 00897810  a1a844a400           mov eax, dword ptr [0xa444a8]
// 00897815  50                   push eax
// 00897816  e81712e8ff           call 0x718a32
// 0089781b  83c404               add esp, 4
// 0089781e  c7059044a40030d28a00 mov dword ptr [0xa44490], 0x8ad230
// 00897828  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897810(int);
void func_00897810()
{
    G4_func_00897810(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
