// roc 2009-06 0089c480  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c480
//
// 0089c480  a1d8eca400           mov eax, dword ptr [0xa4ecd8]
// 0089c485  50                   push eax
// 0089c486  e8a7c5e7ff           call 0x718a32
// 0089c48b  83c404               add esp, 4
// 0089c48e  c705c0eca40030d28a00 mov dword ptr [0xa4ecc0], 0x8ad230
// 0089c498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c480(int);
void func_0089c480()
{
    G4_func_0089c480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
