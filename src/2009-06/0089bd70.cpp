// roc 2009-06 0089bd70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bd70
//
// 0089bd70  a1bce4a400           mov eax, dword ptr [0xa4e4bc]
// 0089bd75  50                   push eax
// 0089bd76  e8b7cce7ff           call 0x718a32
// 0089bd7b  83c404               add esp, 4
// 0089bd7e  c705a4e4a40030d28a00 mov dword ptr [0xa4e4a4], 0x8ad230
// 0089bd88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bd70(int);
void func_0089bd70()
{
    G4_func_0089bd70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
