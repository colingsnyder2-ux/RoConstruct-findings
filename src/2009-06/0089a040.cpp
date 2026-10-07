// roc 2009-06 0089a040  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a040
//
// 0089a040  a198bba400           mov eax, dword ptr [0xa4bb98]
// 0089a045  50                   push eax
// 0089a046  e8e7e9e7ff           call 0x718a32
// 0089a04b  83c404               add esp, 4
// 0089a04e  c70580bba40030d28a00 mov dword ptr [0xa4bb80], 0x8ad230
// 0089a058  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a040(int);
void func_0089a040()
{
    G4_func_0089a040(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
