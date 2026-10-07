// roc 2009-06 0089bc50  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bc50
//
// 0089bc50  a158e4a400           mov eax, dword ptr [0xa4e458]
// 0089bc55  50                   push eax
// 0089bc56  e8d7cde7ff           call 0x718a32
// 0089bc5b  83c404               add esp, 4
// 0089bc5e  c7053ce4a40030d28a00 mov dword ptr [0xa4e43c], 0x8ad230
// 0089bc68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bc50(int);
void func_0089bc50()
{
    G4_func_0089bc50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
