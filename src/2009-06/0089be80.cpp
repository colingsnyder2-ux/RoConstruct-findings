// roc 2009-06 0089be80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089be80
//
// 0089be80  a16ce6a400           mov eax, dword ptr [0xa4e66c]
// 0089be85  50                   push eax
// 0089be86  e8a7cbe7ff           call 0x718a32
// 0089be8b  83c404               add esp, 4
// 0089be8e  c70554e6a40030d28a00 mov dword ptr [0xa4e654], 0x8ad230
// 0089be98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089be80(int);
void func_0089be80()
{
    G4_func_0089be80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
