// roc 2009-06 0089ba20  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ba20
//
// 0089ba20  a180e2a400           mov eax, dword ptr [0xa4e280]
// 0089ba25  50                   push eax
// 0089ba26  e807d0e7ff           call 0x718a32
// 0089ba2b  83c404               add esp, 4
// 0089ba2e  c70568e2a40030d28a00 mov dword ptr [0xa4e268], 0x8ad230
// 0089ba38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ba20(int);
void func_0089ba20()
{
    G4_func_0089ba20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
