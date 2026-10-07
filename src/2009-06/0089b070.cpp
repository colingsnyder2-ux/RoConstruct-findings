// roc 2009-06 0089b070  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b070
//
// 0089b070  a100d2a400           mov eax, dword ptr [0xa4d200]
// 0089b075  50                   push eax
// 0089b076  e8b7d9e7ff           call 0x718a32
// 0089b07b  83c404               add esp, 4
// 0089b07e  c705e8d1a40030d28a00 mov dword ptr [0xa4d1e8], 0x8ad230
// 0089b088  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b070(int);
void func_0089b070()
{
    G4_func_0089b070(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
