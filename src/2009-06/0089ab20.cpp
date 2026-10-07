// roc 2009-06 0089ab20  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ab20
//
// 0089ab20  a154cda400           mov eax, dword ptr [0xa4cd54]
// 0089ab25  50                   push eax
// 0089ab26  e807dfe7ff           call 0x718a32
// 0089ab2b  83c404               add esp, 4
// 0089ab2e  c7053ccda40030d28a00 mov dword ptr [0xa4cd3c], 0x8ad230
// 0089ab38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ab20(int);
void func_0089ab20()
{
    G4_func_0089ab20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
