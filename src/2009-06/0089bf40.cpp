// roc 2009-06 0089bf40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bf40
//
// 0089bf40  a160e7a400           mov eax, dword ptr [0xa4e760]
// 0089bf45  50                   push eax
// 0089bf46  e8e7cae7ff           call 0x718a32
// 0089bf4b  83c404               add esp, 4
// 0089bf4e  c70548e7a40030d28a00 mov dword ptr [0xa4e748], 0x8ad230
// 0089bf58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bf40(int);
void func_0089bf40()
{
    G4_func_0089bf40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
