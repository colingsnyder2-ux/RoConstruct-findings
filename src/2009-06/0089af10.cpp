// roc 2009-06 0089af10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089af10
//
// 0089af10  a1d8d2a400           mov eax, dword ptr [0xa4d2d8]
// 0089af15  50                   push eax
// 0089af16  e817dbe7ff           call 0x718a32
// 0089af1b  83c404               add esp, 4
// 0089af1e  c705c0d2a40030d28a00 mov dword ptr [0xa4d2c0], 0x8ad230
// 0089af28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089af10(int);
void func_0089af10()
{
    G4_func_0089af10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
