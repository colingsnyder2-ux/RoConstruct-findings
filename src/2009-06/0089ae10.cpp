// roc 2009-06 0089ae10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ae10
//
// 0089ae10  a194d2a400           mov eax, dword ptr [0xa4d294]
// 0089ae15  50                   push eax
// 0089ae16  e817dce7ff           call 0x718a32
// 0089ae1b  83c404               add esp, 4
// 0089ae1e  c7057cd2a40030d28a00 mov dword ptr [0xa4d27c], 0x8ad230
// 0089ae28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ae10(int);
void func_0089ae10()
{
    G4_func_0089ae10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
