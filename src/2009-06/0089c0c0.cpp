// roc 2009-06 0089c0c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c0c0
//
// 0089c0c0  a1d4eba400           mov eax, dword ptr [0xa4ebd4]
// 0089c0c5  50                   push eax
// 0089c0c6  e867c9e7ff           call 0x718a32
// 0089c0cb  83c404               add esp, 4
// 0089c0ce  c705bceba40030d28a00 mov dword ptr [0xa4ebbc], 0x8ad230
// 0089c0d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c0c0(int);
void func_0089c0c0()
{
    G4_func_0089c0c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
