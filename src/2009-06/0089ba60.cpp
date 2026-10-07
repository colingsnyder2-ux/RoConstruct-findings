// roc 2009-06 0089ba60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ba60
//
// 0089ba60  a19ce2a400           mov eax, dword ptr [0xa4e29c]
// 0089ba65  50                   push eax
// 0089ba66  e8c7cfe7ff           call 0x718a32
// 0089ba6b  83c404               add esp, 4
// 0089ba6e  c70584e2a40030d28a00 mov dword ptr [0xa4e284], 0x8ad230
// 0089ba78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ba60(int);
void func_0089ba60()
{
    G4_func_0089ba60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
