// roc 2009-06 0089c640  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c640
//
// 0089c640  a1fcefa400           mov eax, dword ptr [0xa4effc]
// 0089c645  50                   push eax
// 0089c646  e8e7c3e7ff           call 0x718a32
// 0089c64b  83c404               add esp, 4
// 0089c64e  c705e4efa40030d28a00 mov dword ptr [0xa4efe4], 0x8ad230
// 0089c658  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c640(int);
void func_0089c640()
{
    G4_func_0089c640(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
