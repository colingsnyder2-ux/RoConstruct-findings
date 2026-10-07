// roc 2009-06 0089c040  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c040
//
// 0089c040  a1c4eaa400           mov eax, dword ptr [0xa4eac4]
// 0089c045  50                   push eax
// 0089c046  e8e7c9e7ff           call 0x718a32
// 0089c04b  83c404               add esp, 4
// 0089c04e  c705aceaa40030d28a00 mov dword ptr [0xa4eaac], 0x8ad230
// 0089c058  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c040(int);
void func_0089c040()
{
    G4_func_0089c040(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
