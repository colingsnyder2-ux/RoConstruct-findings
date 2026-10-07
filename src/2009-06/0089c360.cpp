// roc 2009-06 0089c360  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c360
//
// 0089c360  a150f1a400           mov eax, dword ptr [0xa4f150]
// 0089c365  50                   push eax
// 0089c366  e8c7c6e7ff           call 0x718a32
// 0089c36b  83c404               add esp, 4
// 0089c36e  c70534f1a40030d28a00 mov dword ptr [0xa4f134], 0x8ad230
// 0089c378  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c360(int);
void func_0089c360()
{
    G4_func_0089c360(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
