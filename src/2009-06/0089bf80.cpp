// roc 2009-06 0089bf80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bf80
//
// 0089bf80  a17ce7a400           mov eax, dword ptr [0xa4e77c]
// 0089bf85  50                   push eax
// 0089bf86  e8a7cae7ff           call 0x718a32
// 0089bf8b  83c404               add esp, 4
// 0089bf8e  c70564e7a40030d28a00 mov dword ptr [0xa4e764], 0x8ad230
// 0089bf98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bf80(int);
void func_0089bf80()
{
    G4_func_0089bf80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
