// roc 2009-06 0089a9e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a9e0
//
// 0089a9e0  a1d0cca400           mov eax, dword ptr [0xa4ccd0]
// 0089a9e5  50                   push eax
// 0089a9e6  e847e0e7ff           call 0x718a32
// 0089a9eb  83c404               add esp, 4
// 0089a9ee  c705b8cca40030d28a00 mov dword ptr [0xa4ccb8], 0x8ad230
// 0089a9f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a9e0(int);
void func_0089a9e0()
{
    G4_func_0089a9e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
