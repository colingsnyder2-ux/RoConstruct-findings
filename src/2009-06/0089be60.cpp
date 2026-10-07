// roc 2009-06 0089be60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089be60
//
// 0089be60  a14ce6a400           mov eax, dword ptr [0xa4e64c]
// 0089be65  50                   push eax
// 0089be66  e8c7cbe7ff           call 0x718a32
// 0089be6b  83c404               add esp, 4
// 0089be6e  c70530e6a40030d28a00 mov dword ptr [0xa4e630], 0x8ad230
// 0089be78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089be60(int);
void func_0089be60()
{
    G4_func_0089be60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
