// roc 2009-06 0089ae70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ae70
//
// 0089ae70  a158d2a400           mov eax, dword ptr [0xa4d258]
// 0089ae75  50                   push eax
// 0089ae76  e8b7dbe7ff           call 0x718a32
// 0089ae7b  83c404               add esp, 4
// 0089ae7e  c70540d2a40030d28a00 mov dword ptr [0xa4d240], 0x8ad230
// 0089ae88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ae70(int);
void func_0089ae70()
{
    G4_func_0089ae70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
