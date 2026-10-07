// roc 2009-06 0089ab00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ab00
//
// 0089ab00  a198cfa400           mov eax, dword ptr [0xa4cf98]
// 0089ab05  50                   push eax
// 0089ab06  e827dfe7ff           call 0x718a32
// 0089ab0b  83c404               add esp, 4
// 0089ab0e  c70580cfa40030d28a00 mov dword ptr [0xa4cf80], 0x8ad230
// 0089ab18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ab00(int);
void func_0089ab00()
{
    G4_func_0089ab00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
