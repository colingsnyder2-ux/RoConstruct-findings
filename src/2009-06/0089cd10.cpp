// roc 2009-06 0089cd10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cd10
//
// 0089cd10  a178faa400           mov eax, dword ptr [0xa4fa78]
// 0089cd15  50                   push eax
// 0089cd16  e817bde7ff           call 0x718a32
// 0089cd1b  83c404               add esp, 4
// 0089cd1e  c7055cfaa40030d28a00 mov dword ptr [0xa4fa5c], 0x8ad230
// 0089cd28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cd10(int);
void func_0089cd10()
{
    G4_func_0089cd10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
