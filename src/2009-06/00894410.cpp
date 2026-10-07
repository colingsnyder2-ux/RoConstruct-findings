// roc 2009-06 00894410  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894410
//
// 00894410  a1d0a4a300           mov eax, dword ptr [0xa3a4d0]
// 00894415  50                   push eax
// 00894416  e81746e8ff           call 0x718a32
// 0089441b  83c404               add esp, 4
// 0089441e  c705b8a4a30030d28a00 mov dword ptr [0xa3a4b8], 0x8ad230
// 00894428  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894410(int);
void func_00894410()
{
    G4_func_00894410(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
