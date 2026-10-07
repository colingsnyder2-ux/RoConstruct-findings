// roc 2009-06 0089c380  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c380
//
// 0089c380  a19ceda400           mov eax, dword ptr [0xa4ed9c]
// 0089c385  50                   push eax
// 0089c386  e8a7c6e7ff           call 0x718a32
// 0089c38b  83c404               add esp, 4
// 0089c38e  c70584eda40030d28a00 mov dword ptr [0xa4ed84], 0x8ad230
// 0089c398  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c380(int);
void func_0089c380()
{
    G4_func_0089c380(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
