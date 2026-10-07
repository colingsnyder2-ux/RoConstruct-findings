// roc 2009-06 0089cc50  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cc50
//
// 0089cc50  a104f8a400           mov eax, dword ptr [0xa4f804]
// 0089cc55  50                   push eax
// 0089cc56  e8d7bde7ff           call 0x718a32
// 0089cc5b  83c404               add esp, 4
// 0089cc5e  c705ecf7a40030d28a00 mov dword ptr [0xa4f7ec], 0x8ad230
// 0089cc68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cc50(int);
void func_0089cc50()
{
    G4_func_0089cc50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
