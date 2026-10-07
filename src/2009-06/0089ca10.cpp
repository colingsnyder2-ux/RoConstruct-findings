// roc 2009-06 0089ca10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ca10
//
// 0089ca10  a108f5a400           mov eax, dword ptr [0xa4f508]
// 0089ca15  50                   push eax
// 0089ca16  e817c0e7ff           call 0x718a32
// 0089ca1b  83c404               add esp, 4
// 0089ca1e  c705f0f4a40030d28a00 mov dword ptr [0xa4f4f0], 0x8ad230
// 0089ca28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ca10(int);
void func_0089ca10()
{
    G4_func_0089ca10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
