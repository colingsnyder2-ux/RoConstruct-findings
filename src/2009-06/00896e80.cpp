// roc 2009-06 00896e80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896e80
//
// 00896e80  a16439a400           mov eax, dword ptr [0xa43964]
// 00896e85  50                   push eax
// 00896e86  e8a71be8ff           call 0x718a32
// 00896e8b  83c404               add esp, 4
// 00896e8e  c7054c39a40030d28a00 mov dword ptr [0xa4394c], 0x8ad230
// 00896e98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896e80(int);
void func_00896e80()
{
    G4_func_00896e80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
