// roc 2009-06 0089a560  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a560
//
// 0089a560  a14cc4a400           mov eax, dword ptr [0xa4c44c]
// 0089a565  50                   push eax
// 0089a566  e8c7e4e7ff           call 0x718a32
// 0089a56b  83c404               add esp, 4
// 0089a56e  c70534c4a40030d28a00 mov dword ptr [0xa4c434], 0x8ad230
// 0089a578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a560(int);
void func_0089a560()
{
    G4_func_0089a560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
