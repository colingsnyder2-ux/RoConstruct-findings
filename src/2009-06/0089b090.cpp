// roc 2009-06 0089b090  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b090
//
// 0089b090  a1e0d0a400           mov eax, dword ptr [0xa4d0e0]
// 0089b095  50                   push eax
// 0089b096  e897d9e7ff           call 0x718a32
// 0089b09b  83c404               add esp, 4
// 0089b09e  c705c8d0a40030d28a00 mov dword ptr [0xa4d0c8], 0x8ad230
// 0089b0a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b090(int);
void func_0089b090()
{
    G4_func_0089b090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
