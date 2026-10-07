// roc 2009-06 008977f0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008977f0
//
// 008977f0  a1e444a400           mov eax, dword ptr [0xa444e4]
// 008977f5  50                   push eax
// 008977f6  e83712e8ff           call 0x718a32
// 008977fb  83c404               add esp, 4
// 008977fe  c705cc44a40030d28a00 mov dword ptr [0xa444cc], 0x8ad230
// 00897808  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008977f0(int);
void func_008977f0()
{
    G4_func_008977f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
