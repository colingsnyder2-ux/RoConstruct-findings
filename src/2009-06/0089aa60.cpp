// roc 2009-06 0089aa60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aa60
//
// 0089aa60  a1d8cfa400           mov eax, dword ptr [0xa4cfd8]
// 0089aa65  50                   push eax
// 0089aa66  e8c7dfe7ff           call 0x718a32
// 0089aa6b  83c404               add esp, 4
// 0089aa6e  c705c0cfa40030d28a00 mov dword ptr [0xa4cfc0], 0x8ad230
// 0089aa78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aa60(int);
void func_0089aa60()
{
    G4_func_0089aa60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
